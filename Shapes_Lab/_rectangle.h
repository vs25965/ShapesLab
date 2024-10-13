#pragma once
#include "_shape.h"
#include <string>

using namespace std;
class _rectangle : public _shape
{
public:
    int getArea(int, int) override;
    int getPerimeter(int, int) override;
    string getName() override;

    int area = 0;
    int perimeter = 0;
};

