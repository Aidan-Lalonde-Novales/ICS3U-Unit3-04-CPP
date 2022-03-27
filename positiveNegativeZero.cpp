// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-03-26
// This is a program that checks if a number is positive,
// negative, or simply zero.

#include <iostream>

int main() {
  // this function checks if a number is positive, negative, or zero
  int userNumber;

  // input
  std::cout << "Enter an integer: ";
  std::cin >> userNumber;

  // process
  if (userNumber > 0) {
    // output
    std::cout << userNumber << " is a positive number." << std::endl;
  } else if (userNumber < 0) {
    std::cout << userNumber << " is a negative number." << std::endl;
  } else if (userNumber == 0) {
    std::cout << "Your number is just zero." << std::endl;
  } else {
    std::cout << " Something went wrong." << std::endl;
  }

  std::cout << "\nDone." << std::endl;
}
