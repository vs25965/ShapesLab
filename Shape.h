//
// Created by gn65240 on 10/8/2024.
//
#include <string>

#ifndef SHAPE_H
#define SHAPE_H



class Shape {
public:
    virtual ~Shape() = default;

    virtual int getArea(int, int) = 0;
    virtual int getPerimeter(int,int) = 0;
    virtual string getName() = 0;
};



#endif //SHAPE_H
