// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Sat/May15/2021
// This program is number guessing game using while loop


#include <iostream>
#include <random>


int main() {
    // this function checks if the number guessed is correct or wrong

    std::string guessedNumberString;
    int guessedNumber;
    int someRandomNumber;


    // input
    std::cout << "Enter the number between 0 - 9:";
    std::cin >> guessedNumberString;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0 , 9);  // [0,9]
    someRandomNumber = idist(rgen);

    // process & output
    try {
        guessedNumber = std::stoi(guessedNumberString);

        while (free) {
            if (guessedNumber == someRandomNumber) {
                // output
                std::cout << "You guessed correct!" << std::endl;
                std::cout << "Thanks for playing." << std::endl;
                break;
            } else if (guessedNumber != someRandomNumber) {
                // output
                std::cout << "You guessed wrong!" << std::endl;
                std::cout << "Enter the number again between 0 - 9:";
                std::cin >> guessedNumber;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "\ninvalid input!" << std::endl;
        std::cout << "Thanks for playing." << std::endl;
    }


std::cout << "\n\nDone." << std::endl;
}
