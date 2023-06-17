#include <iostream>
#include <string>
#include <limits>

int main()
{
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;

    while(std::cin.fail() || favorite_number < 1 || favorite_number > 100) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "Invalid input. Please enter a number between 1 and 100: ";
        std::cin >> favorite_number;
    }

    std::cout << "Amazing!! That's my favorite number too!\n";

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::string name;
    std::cout << "What is your name? ";
    getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n";
    
    return 0;
}

