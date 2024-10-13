#pragma once
#include <string>
using namespace std;

class _shape {
public:
    virtual ~_shape() = default;
    virtual int getArea(int, int) = 0;
    virtual int getPerimeter(int, int) = 0;
    virtual string getName() = 0;

};

