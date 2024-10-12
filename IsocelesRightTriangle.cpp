//
// Created by gn65240 on 10/12/2024.
//

#include "IsocelesRightTriangle.h"
#include <stdio.h>
#include "RightTriangle.h"
#include "IsocelesRightTriangle.h"
#include<cmath>

int IsocelesRightTriangle::getArea(int side) {
    return 0.5*side*side;
}

int IsocelesRightTriangle::getPerimeter(int side) {
    int hypotenuse = side *sqrt(2);
    return 2 * side + hypotenuse;
    
}