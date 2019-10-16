// Copyright (c) 2019 Andrei Chirilov all rights reserved
//
// Created by: Andrei Chirilov
// Created on: October 2019
// This program checks to see if a letter is a vowel, consonant, or both

#include <iostream>

int main() {
    std::string letter_as_string;
    
    std::cout << "Enter a letter: ";
    std::cin >> letter_as_string;
    
    if (letter_as_string == "A" || letter_as_string == "E" || letter_as_string
    == "I" || letter_as_string == "O" || letter_as_string == "U") {
        std::cout << "This is a vowel.";
    } else if (letter_as_string == "B" || letter_as_string == "C" || 
    letter_as_string == "D" || letter_as_string == "F" || letter_as_string
    == "G" || letter_as_string == "H" || letter_as_string == "J" ||
    letter_as_string == "K" || letter_as_string == "L" || letter_as_string ==
    "M" || letter_as_string == "N" || letter_as_string == "P" ||
    letter_as_string == "Q" || letter_as_string == "R" || letter_as_string ==
    "S" || letter_as_string == "T" || letter_as_string == "V" ||
    letter_as_string == "W" || letter_as_string == "X" || letter_as_string ==
    "Z") {
        std::cout << "This is a consonant.";
    } else if (letter_as_string == "Y") {
        std::cout << "This is both.";
    } else {
        std::cout << "This is not a letter.";
    }
}
