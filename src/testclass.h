/**
 *  Copyright (c) 2016 Valtteri Pyyhtiä
 *  Licensed under the MIT License
 */

#ifndef TESTCLASS_H
#define TESTCLASS_H

class TestClass
{
    public:
        TestClass();

        /**
         * @brief Check if value is greater than zero
         * @param value
         * @return true if value is greater than zero
         */
        bool greaterThanZero(const int value) const;
};

#endif
