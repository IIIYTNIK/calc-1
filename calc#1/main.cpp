//Автор: Бородиенко Д.Т.

#include <iostream>
#include <cassert>
#include <cmath> // для fabs
#include "Calculate.h"
using namespace MyMath;


void testCalc() {
    // Тест 1: Положительные числа
    double result1 = MyMath::calc(5.0, 2.0);
    assert(fabs(result1 == ((fabs(5.0) - fabs(2.0)) / (1.0 + fabs(5.0 * 2.0)))));

    // Тест 2: Отрицательные числа
    double result2 = MyMath::calc(-3.0, -4.0);
    assert(fabs(result2 == ((fabs(-3.0) - fabs(-4.0)) / (1.0 + fabs(-3.0 * -4.0)))));

    // Тест 3: Числа с разными знаками
    double result4 = MyMath::calc(5.0, -2.0);
    assert(fabs(result4 == ((fabs(5.0) - fabs(-2.0)) / (1.0 + fabs(5.0 * -2.0)))));

    // Тест 4: Ноль и положительное число
    double result5 = MyMath::calc(0.0, 5.0);
    assert(fabs(result5 == ((fabs(0.0) - fabs(5.0)) / (1.0 + fabs(0.0 * 5.0)))));

    // Тест 5: Положительное и нулевое число
    double result6 = MyMath::calc(5.0, 0.0);
    assert(fabs(result6 == ((fabs(5.0) - fabs(0.0)) / (1.0 + fabs(5.0 * 0.0)))));
}

int main(void)
{
    testCalc();

    double x, y;
    std::cout << "Input x, y: ";
    std::cin >> x >> y;

    double z;
    z = MyMath::calc(x, y);
    std::cout << "Result = " << z;
    return 0;
}