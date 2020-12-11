// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program tells you if you're old enough

#include <iostream>
#include <string>

int main() {
    // this function checks if you are old enough
    std::string positive_integer_string;
    int positive_integer;
    int number_sum = 1;
    int loop_counter = 1;

    // input
    std::cout << "Enter the positive integer you chose: ";
    std::cin >> positive_integer_string;
    std::cout << "" << std::endl;

    // process & output
    try {
        positive_integer = std::stoi(positive_integer_string);

        if (positive_integer < 0) {
            throw std::invalid_argument("This wasn't an integer");
    }

    do {
        number_sum = number_sum * loop_counter;
        loop_counter = loop_counter + 1;
    } while (loop_counter <= positive_integer);

        std::cout << number_sum << std::endl;
    } catch (std::invalid_argument) {
        // output
        std::cout << "That was not a valid integer" << std::endl;
    }
}
