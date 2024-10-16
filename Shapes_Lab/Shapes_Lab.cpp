// Shapes_Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include <iostream>
#include "_shape.h"
#include "_rectangle.h"
#include "_circle.h"
#include "_righttriangle.h"
#include "_square.h"
#include <cassert>
#include <string>

using namespace std;

string printAreaToScreen(_shape* s, int length, int width) {

    return "The area of the " + s->getName() + " is " + to_string(s->getArea(length, width));

}

int main() {
    //Rectangle Tests
    _rectangle rectangle1 = _rectangle();
    assert(rectangle1.getArea(12, 12) == 144);
    assert(rectangle1.getPerimeter(12, 12) == 48);
    //Circle Tests
    _circle circle1 = _circle();
    assert(circle1.getArea(12, 0) == 452);
    assert(circle1.getPerimeter(12, 0) == 75);
    _righttriangle RightTriangle1 = _righttriangle();
    assert(RightTriangle1.getArea(12, 12) == 72);
    assert(RightTriangle1.getPerimeter(12, 12) == 16);
    _square square1 = _square();
    assert(square1.getArea(1, 1) == 1);
    assert(square1.getPerimeter(1, 1) == 4);
   
    
    _shape* pointer1 = &rectangle1;
    assert(printAreaToScreen(pointer1, 2, 2) == "The area of the rectangle is 4");
    _shape* pointer2 = &RightTriangle1;
   assert(printAreaToScreen(pointer2, 12, 12) == "The area of the Right Triangle is 72");
    
    cout << "Tests Passed!" << endl;


   

   
    return 0;


}