//
// Created by gn65240 on 10/8/2024.
//

#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H
#include "Shape.h"
using namespace std;

class RightTriangle : public Shape{
public:
    int getArea(int, int) override;
    int getPerimeter(int, int) override;
    string getName() override;

    int area = 0;
    int perimeter= 0;
};



#endif //RIGHTTRIANGLE_H
