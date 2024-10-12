//
// Created by gn65240 on 10/12/2024.
//

#ifndef ISOCELESRIGHTTRIANGLE_H
#define ISOCELESRIGHTTRIANGLE_H
#include "RightTriangle.h"


class IsocelesRightTriangle : public RightTriangle{
public:
    int getArea(int side);

    int getPerimeter(int side);

    int perimeter(int side);
};

#include "IsocelesRightTriangle.cpp"




#endif //ISOCELESRIGHTTRIANGLE_H
