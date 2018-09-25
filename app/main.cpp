/**
* @file main.cpp
* @brief PidController main
* @details It regulates the velocity using a PID controller and reaches the set
* velocity with some tolerance.
* @author Indushekhar Singh
* @version 1.0
* @copyright MIT License (c) 2018 Indushekhar Singh
*/

#include "../include/PidController.hpp"

/**
* @brief Main funtion
*/

int main() {
    PidController pid_1(0, 0);
    double setVelocity = 60;
    double currentVelocity = 50;
    while (true) {
        currentVelocity = pid_1.compute(currentVelocity, setVelocity);
        double new_error = setVelocity - currentVelocity;
        if ((new_error < 0.2) && (new_error > -0.2)) {
            break;
        }
    }
    std::cout << "currentVelocity "
              << "="
              << " " << currentVelocity << std::endl;
    return 0;
}
