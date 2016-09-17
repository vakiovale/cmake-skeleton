/**
 *  Copyright (c) 2016 Valtteri Pyyhtiä
 *  Licensed under the MIT License
 */

#include "exampleclass.h"

ExampleClass::ExampleClass() : helloMessage("Hello")
{
    // Nothing special here!
}

void ExampleClass::sayHello() const
{
    std::cout << helloMessage << std::endl;
}
