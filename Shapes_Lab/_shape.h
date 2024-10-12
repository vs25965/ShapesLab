#pragma once
class _shape
{
public:
    virtual ~_shape() = default;

    virtual int getArea(int, int) = 0;
    virtual int getPerimeter(int, int) = 0;
};

