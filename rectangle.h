//
// Created by gn65240 on 10/8/2024.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
using namespace std;

class rectangle : public Shape {
public:
    int getArea(int,int) override;
    int getPerimeter(int,int) override;

    int area = 0;
    int perimeter= 0;








};




#endif //RECTANGLE_H
