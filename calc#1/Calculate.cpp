//�����: ���������� �.�.

#include <iostream>
#include <cmath> // ��� fabs
#include "Calculate.h"

//https://ivtipm.github.io/Programming/Glava01/index01.htm#z2
///������� ��� �������� ������� � � �, x � �: ������������. ��������� ������������

namespace MyMath {
    double calc(double x, double y)
    {
        return ((fabs(x) - fabs(y)) / (1.0 + fabs(x * y)));
    }
}
