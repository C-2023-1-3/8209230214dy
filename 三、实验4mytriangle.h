#pragma once
#include <iostream>
#include<cmath>
using namespace std;
bool is_valid(double side1, double side2, double side3) {
    if (side1 + side2 > side3 && side1 - side2 < side3) {
        return true;
    }
    else return false;
}
double _area(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;
    double sq = sqrt((s * (s - side1) * (s - side2) * (s - side3)));
    if (is_valid(side1, side2, side3) == true) {
        cout <<"�������ε�����ǣ�"<< sq << endl;
        return 0;
    }
    else {
        cout << "������Ϣ" << endl;
        return 0;
    }
}
