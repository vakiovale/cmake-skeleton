/**
 *  Copyright (c) 2016 Valtteri Pyyhtiä
 *  Licensed under the MIT License
 */

#include "testclasstest.h"

SCENARIO("Integers can be compared to zero", "[number]")
{
    GIVEN("a TestClass")
    {
        TestClass testClass;

        WHEN("Checking if 1 is greater than zero")
        {
            bool result = testClass.greaterThanZero(1);

            THEN("1 should be greater than zero")
            {
                REQUIRE(result == true);
            }
        }

        WHEN("Checking if -1 is greater than zero")
        {

            bool result = testClass.greaterThanZero(-1);

            THEN("-1 should not be greater than zero")
            {
                REQUIRE(result == false);
            }
        }

        WHEN("Checking if zero is greater than zero")
        {

            bool result = testClass.greaterThanZero(0);

            THEN("0 should not be greater than zero")
            {
                REQUIRE(result == false);
            }
        }
    }
}
