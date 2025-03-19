// Copyright (c) 2025 Serge Hamouche All rights reserved.
// Created by: Serge Hamouche
// Date: March 18, 2025
// It asks the user for the radius
// then uses it to calculate to area and circumference of the circle
#include <cmath>
#include <iostream>

int main() {
    // Input
    float radius;
    std::cout << "What is the radius of your Circle? ";
    std::cin >> radius;

    // Calculate the circumference and area
    int circumference = M_PI * 2 * radius;

    int area = M_PI * std::pow(radius, 2);
    int sqrt_100 = std::sqrt(100.0);
    int sqrt_25 = std::sqrt(25.0);

    // Output
    std::cout << circumference << std::endl;
    std::cout << area << std::endl;
    std::cout << sqrt_100 << std::endl;
    std::cout << sqrt_25 << std::endl;

    return 0;
}
