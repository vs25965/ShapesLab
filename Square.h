//
// Created by gn65240 on 10/9/2024.
//

#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"


class Square : public rectangle{

public: 

	int area;
	int perimeter;

	Square(int side)
	{
		int width = side;
		int height = side;
	}

};



#endif //SQUARE_H
