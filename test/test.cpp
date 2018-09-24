/**
* @file test.cpp
* @brief Unit tests for PidController class
* @author Indushekhar Singh
* @version 1.0
* @copyright MIT License (c) 2018 Indushekhar Singh
*/

#include <gtest/gtest.h>
#include <PidController.hpp>


/**
 * @brief Test for computation of the output velocity
 */

TEST(PidControllerTest, testCompute) {
     PidController test_compute(0, 0);
     double currentVelocity = test_compute.compute(50, 60);
     EXPECT_NEAR(1.7, currentVelocity, 0.1);
}


/**
 * @brief Test for Parameterized Constructors
 */

TEST(PidControllerTest, testParamInit) {
     PidController test_param_init(0, 3);
     EXPECT_EQ(3, test_param_init.old_integral);
}
