// Copyright (c) 2025 All rights reserved.
//
// Created by: Adrian student.
// Created on: 10th oct 2026
// This program is a guessing game in which the user
// tries to guess a number between 0 and 9
#include <iostream>

int main() {
    // declare constants
    const int CR = 8;

    // declare variables
    int userNumber;

    // get user number
    std::cout << "Enter the user number:";
    std::cin >> userNumber;
    std::cout <<"" <<std::endl;

    // check if user number is the right number
    if (userNumber == CR) {
        std::cout <<"you are right";
    }
    if (userNumber != CR) {
        std::cout << "you are wrong" << std::endl;
    }

    // display the correct answer
    if (userNumber != CR) {
        std::cout << "The correct answer was:" << CR << std::endl;
    }
}
