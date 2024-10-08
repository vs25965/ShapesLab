
#include "circle.h"
#include <iostream>
#include <string>
using namespace std;

int circle:: getArea(int radius, int na){
   int area = (3.14 * radius * radius);
   return area;


}
int circle:: getPerimeter(int radius, int na) {
   int perimeter = (2*3.14 * radius);
   return perimeter;
}