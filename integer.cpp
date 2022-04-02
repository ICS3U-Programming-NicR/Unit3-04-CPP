// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on: March 29 2022
// This program makes a random number game

#include <stdlib.h>
#include <iostream>
#include <random>

using std::cout;
using std::cin;
using std::string;

int main() {
  int usersNum;

    cout << "What number would you like to test ";
    cin >> usersNum;

    if (usersNum > 0) {
        cout << "The number is positive\n";
    } else if (usersNum < 0) {
       cout << "The number is negative\n";
    } else {
      cout << "The number is equal to 0\n";
    }

    string tryAgain;
    cout << "would you like to try again? ";
    cin >> tryAgain;
    if (tryAgain == "y"
        || tryAgain == "Y"
        || tryAgain == "yes"
        || tryAgain == "YES") {
        main();
    } else if (tryAgain == "n"
        || tryAgain == "N"
        || tryAgain == "no"
        || tryAgain == "NO") {
        exit(1);
    }
}
