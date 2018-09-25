/**
* @file pid.cpp
* @brief PidController Class Implementation
* @details Implementation of PidController class for computing velocity
* @author Indushekhar Singh
* @version 1.0
* @copyright MIT License (c) 2018 Indushekhar Singh
*/

#include "../include/PidController.hpp"

/**
* @brief parametric constructor to initialize the controller
* @param old_error_init - Initial error value for controller
* @param old_integral_init - Initial integral value for controller
*/

PidController::PidController(double old_error_init, double old_integral_init) {
    // To do : Store the input parameter in old_error
    // and old_integral respectively.
    old_error = old_error_init;
    old_integral = old_integral_init;
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
    // return currentVelocityi
    double error = setVelocity - currentVelocity;
    old_integral += error * dt;
    double derivative = (error - old_error) / dt;
    double intergral_out = ki * old_integral;
    // cout<<"intergral_out"<<intergral_out;
    double derivative_out = kd * derivative;
    // cout<<"derivative_out"<<derivative_out;
    double prop_out = kp * error;
    // cout<< "prop_out"<< prop_out;
    currentVelocity = prop_out + intergral_out + derivative_out;
    // cout<<currentVelocity;
    old_error = error;
    return currentVelocity;
}
