#include "_righttriangle.h"
#include "_shape.h"
#include <cmath>
#include <math.h>

using namespace std;

int _righttriangle::getArea(int base, int height) {
    int area = (.5 * base * height);
    return area;
}

int _righttriangle::getPerimeter(int base, int height) {
    int perimeter = sqrt(pow(base, 2) + pow(height, 2));
    return perimeter;
}
string _righttriangle::getName() {
    return "Right Triangle";
}