//
// Created by gn65240 on 10/8/2024.
//

#include "RightTriangle.h"
#include <cmath>
#include<iostream>
#include <math.h>
#include <valarray>
using namespace std;

int RightTriangle::getArea(int base, int height) {
    int area = (.5*base*height);
    return area;
}

int RightTriangle::getPerimeter(int base, int height) {
    int perimeter = sqrt(pow(base, 2) + pow(height, 2));
    return perimeter;
    }