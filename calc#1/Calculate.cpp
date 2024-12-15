//Автор: Бородиенко Д.Т.

#include <iostream>
#include <cmath> // для fabs
#include "Calculate.h"


// Реализация функции из пронстраства имён MyMath для
namespace MyMath {
    //https://ivtipm.github.io/Programming/Glava01/index01.htm#z2
    ///Функция для подсчёта формулы х и у, x и у: вещественные. Результат вещественный
    double calc(double x, double y)
    {
        return ((fabs(x) - fabs(y)) / (1.0 + fabs(x * y)));
    }
}
