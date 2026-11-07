#!/bin/bash
# Usage: ./run_tests.sh [path-to-main.cpp]
# Compiles main.cpp with the course flags, then runs every test and diffs the output.
SRC="${1:-main.cpp}"
DIR="$(cd "$(dirname "$0")" && pwd)"
g++ -std=c++17 -Wall -Wextra -pedantic -Weffc++ -o "$DIR/a.out" "$SRC" || { echo "COMPILE FAILED"; exit 1; }
pass=0; fail=0
for n in 1 2 3 4 5 6 7 8 9; do
  in="$DIR/tests/test_$n.txt"; exp="$DIR/tests/expected_$n.txt"
  label="Test $n"; [ "$n" = 9 ] && label="Test 9 (optional Task 5)"
  if diff <("$DIR/a.out" < "$in") "$exp" > /dev/null; then
    echo "[PASS] $label"; pass=$((pass+1))
  else
    echo "[FAIL] $label"; fail=$((fail+1))
    echo "  --- expected ---"; sed 's/^/  /' "$exp"
    echo "  --- got ---";      "$DIR/a.out" < "$in" | sed 's/^/  /'
  fi
done
echo "Passed $pass, failed $fail"
