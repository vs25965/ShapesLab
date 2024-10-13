#include <stdio.h>
#include <iostream>
#include "Shape.h"
#include "rectangle.h"
#include "circle.h"
#include "RightTriangle.h"
#include <cassert>
#include "IsocelesRightTriangle.h"
#include <string>

using namespace std;

string printAreaToScreen(Shape* s, int length, int width) {

    return "The area of the " + s->getName() + " is " + to_string(s->getArea(length, width));

}



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
    assert(Square1.getArea(2, 2) == 4);
    assert(Square1.getPerimeter(2, 2) == 8);

    IsocelesRightTriangle IsocelesRightTriangle1 = IsocelesRightTriangle();
    assert(IsocelesRightTriangle1.getArea(12) == 72);
    assert(IsocelesRightTriangle1.getPerimeter(12) == 40);
  
    


    //Example part 3 

    Shape* pointer1 = &rectangle1;
    assert(printAreaToScreen(pointer1, 2, 2) == "The area of the rectangle is 4");
    Shape* pointer2 = &RightTriangle1;
    assert(printAreaToScreen(pointer2, 12, 12) == "The area of the Right Triangle is 72");


    cout << "Tests Passed!" << endl;

    return 0;


}
//Testing Part 2