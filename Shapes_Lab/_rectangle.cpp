#include "_rectangle.h"
#include <iostream>
#include <string>
using namespace std;

int _rectangle::getArea(int width, int height) {

    int area = width * height;
    return area;
}
int _rectangle::getPerimeter(int width, int height) {
    int perimeter = (width * 2) + (height * 2);
    return perimeter;
}