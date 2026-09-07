#include <iostream>

/*
The program is supposed to ask the user questions about their age, height, rating and first name initial. The program
will then output the data onto the console for the user to verify if the correct information has been displayed.

Program is testing coder's ability to initialize and assign variables, and input/outputs
*/

int main(){

    int age{};
    double height{};
    float rating{}; //Rating themselves out of 10
    char fInitial{}; //First name initial

    std::cout << "Personal Profile\n"; //Title
    std::cout << "\n";
    //List of questions for user to interact with in regards to data of themselves
    std::cout << "What is your age: ";
    std::cin >> age;
    std::cout << "What is your height in inches: ";
    std::cin >> height;
    std::cout << "From 1-10 what do you rate yourself: ";
    std::cin >> rating;
    std::cout << "What is your first initial: ";
    std::cin >> fInitial;
    std::cout << "\n";

    // Allows user to check if data they input is correct
    std::cout << "\t--- Your Profile ---\n";
    std::cout << "The age of user is " << age << "\n";
    std::cout << "The height of user is " << height << "\n";
    std::cout << "You rated yourself a " << rating << " out of 10\n";
    std::cout << "Your first initial is \"" << fInitial << "\"\n";

    return 0;
}