/** \file Lab2.cpp
* \brief Small drawing program
* \details This progrma is drowing program
* \Christoforos Chari
* \date 14/03/2022
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
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
	cout << "Enter the number for the random shape";
	cin >> numShapes;
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

/**
*This is the driver of the program, presenting a
*menu
*<BR>
*@return Returns <code>0</code>.
*/
int main() {
	const int MAX_ARRAY = 10;
	int choise, num, num1, tmp;
	char ch;
	srand(time(NULL));//Seed ransd num gen.
	do {
		cout << "1)Draw a horizontal line";
		cout << "\n2)Draw a vertical line";
		cout << "\n3)Draw a square";
		cout << "\n4)Draw a rectangle";
		cout << "\n5)Draw a random shapes";
		cout << "\n6)Exit";
		cout << "\nEnter your choise ";
		cin >> choise;



		if (choise == 1) {
			cout << "\nEnter the length number:";
			cin >> num;
			cout << "\nEnter the charater:";
			cin >> ch;
			drawHorizontalLine(num, ch);
			cout << endl;
		}

		else if (choise == 2) {

			cout << "\nEnter the height number:";
			cin >> num;
			cout << "\nEnter the charater:";
			cin >> ch;
			drawVerticalLine(num, ch);
			cout << endl;
		}
		else if (choise == 3) {

			cout << "\nEnter the square size";
			cin >> num;
			cout << "\nEnter the character:";
			cin >> ch;
			drawSquare(num, ch);

		}


		else if (choise == 4) {

			cout << "\nEnter the height size";
			cin >> num;
			cout << "\nEnter the length size";
			cin >> num1;
			cout << "\nEnter the character:";
			cin >> ch;
			drawRectangle(num, num1, ch);
		}

		else if (choise == 5) {

			drawRandomShapes(MAX_ARRAY);

		}

		else if (choise != 6) {
			cerr << "\nWrong Input\n";
		}

	}

	while (choise != 6); {
		cout << "\nThankyou have a nice day";

	}

	return 0;
}
