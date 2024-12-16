/// Author: Borodienko D.T.

#include <iostream>
#include <cassert>// Connecting the library to use assert
#include <cmath> // for fabs
#include "Calculate.h"
using namespace MyMath;

// Function for testing the calc function
void testCalc() {
    // Тест 1: Положительные числа
    double result1 = MyMath::calc(5.0, 2.0);
    assert(fabs(result1 - ((fabs(5.0) - fabs(2.0)) / (1.0 + fabs(5.0 * 2.0)))) < 1e-9);
    //assert(fabs(result2 - (1.1 * 1.1 + 2.2 * 2.2 + 3.3 * 3.3)) < 1e-9)

    // Тест 2: Отрицательные числа
    double result2 = MyMath::calc(-3.0, -4.0);
    assert(fabs(result2 - ((fabs(-3.0) - fabs(-4.0)) / (1.0 + fabs(-3.0 * -4.0)))) < 1e-9);

    // Тест 3: Числа с разными знаками
    double result3 = MyMath::calc(5.0, -2.0);
    assert(fabs(result3 - ((fabs(5.0) - fabs(-2.0)) / (1.0 + fabs(5.0 * -2.0)))) < 1e-9);

    // Тест 4: Ноль и положительное число
    double result4 = MyMath::calc(0.0, 5.0);
    assert(fabs(result4 - ((fabs(0.0) - fabs(5.0)) / (1.0 + fabs(0.0 * 5.0)))) < 1e-9);

    // Тест 5: Положительное и нулевое число
    double result5 = MyMath::calc(5.0, 0.0);
    assert(fabs(result5 - ((fabs(5.0) - fabs(0.0)) / (1.0 + fabs(5.0 * 0.0)))) < 1e-9);

    //Тест 6: Сравнивание результата
    double result6 = MyMath::calc(-2, 12); //=-0,4
    assert(fabs(result6 - (-0.4)) < 1e-9);

    //Тест 7: Сравнивание результата
    double result7 = MyMath::calc(8, -3); //=0,2
    assert(fabs(result7 - (0.2)) < 1e-9);
}

int main(void)
{
    testCalc();// Запускаем тесты

    double x, y;
    std::cout << "Input x, y: ";
    std::cin >> x >> y;

    double z;
    z = MyMath::calc(x, y);// Вычисляем результат

    std::cout << "Result = " << z;
    return 0;
}