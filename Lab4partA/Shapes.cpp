/** \file Shapes.cpp
* \Library to draw various shapes implimentation.
* \details This progrma illustates a multifile.
* \Christoforos Chari
* \date 18/03/2022
*/
#include"Shapes.h"
#include<iostream>
#include<cassert>

using namespace std;

/**
* Fuction <code> drawHorizontalLine <code> draws a horizontal line
* <BR>
* @param length The length of the line.
* @param ch The sympol to use for the line.
*/
void drawHorizontalLine(const int length, const char ch) {
	cout << "Horizontal Line( " << length << ", " << ch << ")\n";
	for (int i = 0; i < length; i++) {
		cout << ch;

	}
}

/**
* Fuction <code> drawVerticalLine <code> draws a vertical line.
* <BR>
* @param heigth The height of the line.
* @param ch The sympol to use for the line.
*/
void drawVerticalLine(const int height, const char ch) {
	cout << "Vertical Line( " << height << ", " << ch << ")\n";
	for (int i = 0; i < height; i++)
		cout << ch << endl;
}

/**
* Fuction <code> drawSquare <code> draws a square
* <BR>
* @param size The size of the square.
* @param ch The sympol to use for the square.
*/
void drawSquare(const int size, const char ch) {
	int height = size; int length = size;
	cout << "Square( " << size << ", " << ch << ")\n";
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			if (i == 1 || i == height || j == 1 || j == length)
			{
				cout << ch;
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

}

/**
* Fuction <code> drawRectangle <code> draws a Rectangle.
* <BR>
* @param height The height of the rectangle.
* @param length The length of the rectangle.
* @param ch The sympol to use for the rectangle.
*/
void drawRectangle(const int height, const int length, const char ch) {
	cout << "Rectangle( " << height << ", " << length << ", " << ch << ")\n";
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= length; j++)
		{
			if (i == 1 || i == height || j == 1 || j == length)
			{
				cout << ch;
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}

}

/**
* Fuction <code> drawRandomShapes <code> draws a number of random.
* shapes.
* <BR>
* @param numShapes How many random shapes to draw.
*/
void drawRandomShapes(int numShapes) {
	
	assert(numShapes > 0);//pre condition

	for (int i = 0; i < numShapes; i++) {
		cout << "\nDraws randoms shapes\n";
		int ShapeType = 1 + rand() % 4;
		int height = 1 + rand() % 20;
		int length = 1 + rand() % 20;
		char sympol = rand() % 94;//ASCII table 33-126



		switch (ShapeType) {
		case 1:

			drawHorizontalLine(length, sympol);
			break;
		case 2:

			drawRectangle(height, length, sympol);
			break;
		case 3:

			drawSquare(length, sympol);
			break;
		case 4:

			drawVerticalLine(length, sympol);
			break;
		default:
			assert(false);//should not be possible
			cout << "Wrong input";

		}


	}

}