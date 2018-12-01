#include "Square.h"




Square::Square(double x = 0, double y = 0, double length = 0) {
	this->x = x; this->y = y; this->length = length;
};
double Square::getX() { return this->x; };
double Square::getY() { return this->y; };
double Square::getLength() { return this->length; };
void Square::setY(double y) { this->y = y; };
void Square::setX(double x) { this->x = x; };
void Square::setLength(double l) { this->length = l; };
void Square::print() { cout << "The length is: " << this->length << endl << "x: " << this->x << "y:" << this->y << endl; };
double Square::calculateS() {
	return this->length * this->length;
}
bool Square::isIn(double x, double y) {

	double currentMinX = this->x;
	double currentMinY = this->y;

	double currentMaxX = currentMinX + this->length;
	double currentMaxY = currentMinY + this->length;

	return currentMaxX >= x && x >= currentMinX && currentMaxY >= y && y >= currentMinY;
};

Square::~Square()
{

}
