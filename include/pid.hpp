/**
* @file pid.cpp
* @brief PidController Class
* @details Definition of PidController class for computing velocity
* @author Indushekhar Singh
* @version 1.0
* @copyright MIT License (c) 2018 Indushekhar Singh
*/


#include <iostream>
#include <math.h>

/**
* @brief Class for Pid Controller
*/

class PidController {

private:
    double kp,kd,ki,dt;

public:

    /**
    * @brief parametric constructor to initialize the controller
    * @param old_error_init - Initial error value for controller
    * @param old_integral_init - Initial integral value for controller
    */

    PidController(double old_error_init, double old_integral_init);

    double old_error,old_integral;

    /**
    * @brief Method to computes the next current velocity based on the control signal
    * @param currentVelocity  value of the current velocity
    * @param setVelocity  value of the set velocity or target velocity
    * @param kp  Proportional gain
    * @param kd  Derivative gain
    * @param ki  Integral gain
    * @param dt  time span
    * @return currentVelocity  Current velocity computed after one iteratio
    */

    double compute(double currentVelocity, double setVelocity,double kp, double kd,double ki, double dt);
};



