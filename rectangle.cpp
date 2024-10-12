//
// Created by gn65240 on 10/8/2024.
//

#include "rectangle.h"
#include <iostream>
#include <string>
using namespace std;

int rectangle :: getArea(int width,int height ) {

    int area = width * height;
    return area;
}
int rectangle :: getPerimeter(int width,int height) {
    int perimeter = (width*2) + (height *2);
    return perimeter;
}
string rectangle::getNAme() {
    return "rectangle";
}