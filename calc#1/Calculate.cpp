/// Author: Borodienko D.T.

#include <iostream>
#include <cmath> // for fabs
#include "Calculate.h"


/// Implementation of the function from the MyMath namespace for
namespace MyMath {
    //https://ivtipm.github.io/Programming/Glava01/index01.htm#z2
    ///Function for calculating the formulas x and y, x and y: real. The result is real
    double calc(double x, double y)
    {
        return ((fabs(x) - fabs(y)) / (1.0 + fabs(x * y)));
    }
}
