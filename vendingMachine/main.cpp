#include <iostream>
#include <string>

// using std::cout, std::cin, std::endl, std::string;

int main() {
    int total = 0;   // total money inserted, in cents
    int coin = 0;    // the most recent coin read

    std::cout << "Insert coins in cents (5, 10, 25, 100). Enter 0 when done:" << std::endl;

    // TODO (Task 1): Read coins with cin until the user enters 0.
    //   - Valid coins are 5, 10, 25, and 100. Add each valid coin to total.
    //   - For any other value, print:  Invalid coin: <value>
    //     (an invalid coin is NOT added to total)
    //   - You may assume the input always contains a 0 to end the coins.
    //   - Optional (Task 5): handle the value -1 here as well.
    do{
        std::cin >> coin;
        if(coin < 0){std::cout << "Coin return: " << total << " cents" << std::endl; return 0;}
        if(coin != 5 && coin != 10 && coin != 25 && coin != 100 && coin != 0){
            std::cout << "Invalid coin: " << coin << std::endl;}
        else{total += coin;}
    }while(coin != 0);

    std::cout << "Total inserted: " << total << " cents" << std::endl;
    std::cout << "1) Chips - 125 cents" << std::endl;
    std::cout << "2) Candy - 90 cents" << std::endl;
    std::cout << "3) Soda - 150 cents" << std::endl;
    std::cout << "Choose an item:" << std::endl;

    int choice = 0;
    std::cin >> choice;
    int price = 0;   // price of the chosen item, in cents
    std::string name;     // name of the chosen item

    // TODO (Task 2): Use a switch on choice to set price and name.
    //   1 -> Chips (125)    2 -> Candy (90)    3 -> Soda (150)
    //   default -> print:  Invalid selection. Refunding <total> cents.
    //              and end the program with return 0;
    
    switch (choice){
        case(1):
            price = 125;
            name = "Chips";
            break;
        case(2):
            price = 90;
            name = "Candy";
            break;
        case(3):
            price = 150;
            name = "Soda";
            break;
        default:
            std::cout << "Invalid selection." << " Refunding " << total <<  " cents." << std::endl;
            return 0;
    }

    // TODO (Task 3): If total is less than price, print:
    //   Not enough money. Refunding <total> cents.
    //   and end the program with return 0;
    // Otherwise print:  Dispensing <name>.
    if(total < price){
        std::cout << "Not enough money. Refunding " << total << " cents." << std::endl;
        return 0;
    } else{
        std::cout << "Dispensing " << name << "." <<std::endl;
    }

    // TODO (Task 4): Compute the change (total - price) and print:
    //   Change: <change> cents
    //   Quarters: <q>
    //   Dimes: <d>
    //   Nickels: <n>
    // Use as few coins as possible. Hint: use / and %.

    int change = total - price;
    std::cout << "Change: " << change << " cents" << std::endl;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    
    quarters = change / 25;
    change %= 25;
    dimes = change / 10;
    change %= 10;
    nickels = change / 5;
    change %= 5;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickels << std::endl;
    return 0;
}
