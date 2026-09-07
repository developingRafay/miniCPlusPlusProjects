#include <iostream>
#include <string>

// Combine two double values together for result
double add(double x, double y){
    return x + y;
}
// Remove some value of first double value using second double value for result
double subtract(double x, double y){
    return x - y;
}
// Product of first double value and second double value for result
double multiply(double x, double y){
    return x * y;
}
// First double value divided by second double value, has a condition for denominator = 0
double divide(double x, double y){
    if(y == 0){
        std::cout << "Denominator cannot be 0!\n";
        return -1;
    }
    return x / y;
}

int main(){
    std::string ans{};
    while(ans != "Addition" && ans != "addition" && ans != "Add" && ans != "add"
        && ans != "Subtraction" && ans != "subtraction" && ans != "Subtract" && ans != "subtract" 
        && ans != "Multiplication" && ans != "multiplication" && ans != "Multiply" && ans != "multiply"
        && ans != "Division" && ans != "division" && ans != "Divide" && ans != "divide"){
        std::cout << "Welcome to easy Calculator!\nThis calculator can only perform the following with two numbers:\n";
        std::cout << "--Addition\n--Subtraction\n--Multiplication\n--Division\n";
        std::cout << "State which operation to perform: ";
        std::cin >> ans;
    }
    double firstNum{};
    double secondNum{};
    double result{};
    std::cout << "Give us the first number: ";
    std::cin >> firstNum;
    std::cout << "Give us the second number: ";
    std::cin >> secondNum;
    
    if(ans == "Addition" || ans == "addition" || ans == "Add" || ans == "add"){
        result = add(firstNum, secondNum);
    } else if(ans == "Subtraction" || ans == "subtraction" || ans == "Subtract" || ans == "subtract"){
        result = subtract(firstNum, secondNum);
    } else if(ans == "Multiplication" || ans == "multiplication" || ans == "Multiply" || ans == "multiply"){
        result = multiply(firstNum, secondNum);
    } else if(ans == "Division" || ans == "division" || ans == "Divide" || ans == "divide"){
        result = divide(firstNum, secondNum);
    }
    
    std::cout << "Output: " << result << std::endl;
    return 0;
}