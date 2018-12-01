#pragma once
#include <iostream>
using namespace std;

class Square
{
public:
	Square(double x, double y, double length);
	double getX();
	double getY();
	void setY(double y);
	void setX(double x);

	bool isIn(double x, double y);
	double getLength();
	void setLength(double l);
	void print();
	double calculateS();


	~Square();

private:
	double x, y;
	double length;
};



