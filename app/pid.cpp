/**
* @file pid.cpp
* @brief PidController Class Implementation
* @details Implementation of PidController class for computing velocity
* @author Indushekhar Singh
* @version 1.0
* @copyright MIT License (c) 2018 Indushekhar Singh
*/

#include <PidController.hpp>
using std::cout;
using std::endl;

/**
* @brief parametric constructor to initialize the controller
* @param old_error_init - Initial error value for controller
* @param old_integral_init - Initial integral value for controller
*/

PidController::PidController(double old_error_init, double old_integral_init) {
    // To do : Store the input parameter in old_error
    // and old_integral respectively.
}

double PidController::compute(double currentVelocity, double setVelocity) {
    // To Do :
    // Calculate error
    // Calculate integral
    // Update the integral by adding the previous value
    // calculate the derivative
    // Calculate the Interal output
    // Calculate the integral output
    // Calculate the derivative output
    // Calculate the proportional output
    // add all the 3 output and store as currentVelocity
    // update old_error to error
    // return currentVelocity
  return 1.0;
}


