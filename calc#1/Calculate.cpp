//Автор: Бородиенко Д.Т.

#include <iostream>
#include <cmath> // для fabs
#include "Calculate.h"

//https://ivtipm.github.io/Programming/Glava01/index01.htm#z2
///Функция для подсчёта формулы х и у, x и у: вещественные. Результат вещественный

namespace MyMath {
    double calc(double x, double y)
    {
        return ((fabs(x) - fabs(y)) / (1.0 + fabs(x * y)));
    }
}
