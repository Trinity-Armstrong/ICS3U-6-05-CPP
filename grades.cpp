// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: December 2019
// This program calculates your average grade

#include <iostream>
#include <list>

float calculate(std::list<int> listOfMarks) {
    // This function calculates the average of the user's grades

    // Variables
    float markAverage = 0;
    int averageDivider = 0;

    // Process
    for (int counter : listOfMarks) {
        markAverage = markAverage + counter;
        averageDivider += 1;
    }

    markAverage = markAverage/averageDivider;

    // Output
    return markAverage;
}

int main() {
    // This function outputs the users grades and average

    // Variables
    std::list<int> listOfMarks;
    int mark;
    float average;

    // Input
    std::cout << "I will be calculating your overall average." << std::endl;
    std::cout << "Enter all of your marks, enter -1 when you're done."
              << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Enter your mark:" << std::endl;
    std::cin >> mark;
    listOfMarks.push_back(mark);
    while (mark != -1) {
        std::cout << "Enter your mark:" << std::endl;
        std::cin >> mark;
        listOfMarks.push_back(mark);
    }

    // Process
    listOfMarks.pop_back();
    average = calculate(listOfMarks);

    // Output
    std::cout << "" << std::endl;
    std::cout << "Your average is " << average << "%" <<std::endl;
}
