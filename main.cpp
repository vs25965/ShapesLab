#include <stdio.h>
#include <iostream>

#include "IsocelesRightTriangle.h"
#include "Square.h"
using namespace std;
#include "Shape.h"
#include "rectangle.h"
#include "circle.h"
#include "RightTriangle.h"
#include "IsocelesRightTriangle.h"
#include "Square.h"
#include <cassert>
int main() {
    //Rectangle Tests
    rectangle rectangle1 = rectangle();
    assert(rectangle1.getArea(12,12) == 144);
    assert(rectangle1.getPerimeter(12,12) == 48);
    //Circle Tests
    circle circle1 = circle();
    assert(circle1.getArea(12,0) == 452);
    assert(circle1.getPerimeter(12,0) == 75);
    RightTriangle RightTriangle1 = RightTriangle();
    assert(RightTriangle1.getArea(12,12) == 72);
    assert(RightTriangle1.getPerimeter(12,12) == 16);

    Square Square1 = Square();
    assert(Square1.getArea(1, 1) == 1);
    assert(Square1.getPerimeter(1, 1) == 4);

    IsocelesRightTriangle IsocelesRightTriangle1 = IsocelesRightTriangle();
    assert(IsocelesRightTriangle1.getArea(12) == 72);
    assert(IsocelesRightTriangle1.getPerimeter(12) == 40);
    cout << "Tests Passed!" << endl;
    return 0;


}
//Testing Part 2