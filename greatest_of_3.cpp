// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 13, 2021
// Determines the greatest number out of 3

#include <iostream>
#include <string>

main() {
    std::string user_input1, user_input2, user_input3;
    int number1, number2, number3;
    // Input
    std::cout << "Enter your first number: ";
    std::cin >> user_input1;
    std::cout << "Enter your second number: ";
    std::cin >> user_input2;
    std::cout << "Enter your third number: ";
    std::cin >> user_input3;

    try {
        number1 = std::stoi(user_input1);
        number2 = std::stoi(user_input2);
        number3 = std::stoi(user_input3);

        // Process and output
        if (number1 > number2 && number1 > number3) {
            std::cout << number1;
            std::cout << " is the greatest number";
        } else if (number2 > number1 && number2 > number3) {
            std::cout << number2;
            std::cout << " is the greatest number";
        } else {
            std::cout << number3;
            std::cout << " is the greatest number";
        }
    }catch (std::invalid_argument) {
        std::cout << "An error occured\n";
        std::cout << "You can enter numbers only";
    }
    std::cout << "\nDone.";
}
