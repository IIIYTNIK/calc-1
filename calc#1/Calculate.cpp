//�����: ���������� �.�.

#include <iostream>
#include <cmath> // ��� fabs
#include "Calculate.h"


// ���������� ������� �� ������������ ��� MyMath ���
namespace MyMath {
    //https://ivtipm.github.io/Programming/Glava01/index01.htm#z2
    ///������� ��� �������� ������� � � �, x � �: ������������. ��������� ������������
    double calc(double x, double y)
    {
        return ((fabs(x) - fabs(y)) / (1.0 + fabs(x * y)));
    }
}
