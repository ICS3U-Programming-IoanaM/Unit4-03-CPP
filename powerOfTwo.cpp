// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu
//
// Date: Nov. 14, 2022
// a program that calculates the the square of
// all the numbers proceeding and including a given number


#include <cmath>
#include <iostream>

int main() {
    // variables
    std::string userNumString;
    int userNumInt, numSquared;
    float userNumFloat;

    // getting input
    std::cout << "Please enter a whole number: ";
    std::cin >> userNumString;

    // exception handling
    try {
        userNumInt = stoi(userNumString);
        userNumFloat = stoi(userNumString);

        // checks for decimals
        if (userNumFloat != userNumInt) {
            std::cout << "Input invalid! Please enter a WHOLE number!"
                      << std::endl;

        // checks for negative numbers
        } else if (userNumInt < 0) {
            std::cout << "Input invalid! Please enter a WHOLE number!"
                      << std::endl;
        } else {
            // calculates and displays a number squared
            for (int counter = 0; counter <= userNumInt; counter++) {
                numSquared = pow(counter, 2);
                std::cout << numSquared << "^2 = " << userNumInt
                          << std::endl;
            }
        }

    // user imputed invalid input
    } catch (std::invalid_argument) {
        std::cout << "Input invalid! Please enter a WHOLE number!"
                  << std::endl;
    }

    std::cout << "Thank you for using this program!" << std::endl;
}
