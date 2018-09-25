/**
* @file pid.cpp
* @brief PidController Class
* @details Definition of PidController class for computing velocity
* @author Indushekhar Singh
* @version 1.0
* @copyright MIT License (c) 2018 Indushekhar Singh
*/
#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

#include <math.h>
#include <iostream>

using std::cout;
using std::endl;
/**
* @brief Class for Pid Controller
*/

class PidController {
 private:
    double kp = 0.1, kd = 0.01, ki = 0.1, dt = 0.5;

 public:
    double old_error, old_integral;

    /**
    * @brief parametric constructor to initialize the controller
    * @param old_error_init - Initial error value for controller
    * @param old_integral_init - Initial integral value for controller
    */

    PidController(double old_error_init, double old_integral_init);
    /**
    * @brief Method to computes the next current velocity based on the control
    * signal
    * @param currentVelocity  value of the current velocity
    * @param setVelocity  value of the set velocity or target velocity
    * @param kp  Proportional gain
    * @param kd  Derivative gain
    * @param ki  Integral gain
    * @param dt  time span
    * @return currentVelocity  Current velocity computed after one iteratio
    */

    double compute(double currentVelocity, double setVelocity);
};

#endif   // INCLUDE_PIDCONTROLLER_HPP_"
