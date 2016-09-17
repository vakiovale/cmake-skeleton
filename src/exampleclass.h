/**
 *  Copyright (c) 2016 Valtteri Pyyhtiä
 *  Licensed under the MIT License
 */

#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <iostream>
#include <string>

class ExampleClass
{
    public:
        ExampleClass();
        void sayHello() const;

    private:
        const std::string helloMessage;
};

#endif
