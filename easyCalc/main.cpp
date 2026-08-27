#include <iostream>
#include <string>

int main(){
    std::string ans{};
    std::cout << "Welcome to easy Calculator!\nThis calculator can only perform the following with two numbers:\n";
    std::cout << "--Addition\n--Subtraction\n--Multiplication\n--Division\n";
    std::cout << "State which operation to perform: ";
    std::cin >> ans;

    double firstNum{};
    double secondNum{};
    double result{};
    std::cout << "Give us the first number: ";
    std::cin >> firstNum;
    std::cout << "Give us the second number: ";
    std::cin >> secondNum;
    
    if(ans == "Addition"){
        result = firstNum + secondNum;
    } else if(ans == "Subtraction"){
        result = firstNum - secondNum;
    } else if(ans == "Multiplication"){
        result = firstNum * secondNum;
    } else if(ans == "Division"){
        result = firstNum / secondNum;
    }
    
    return 0;
}