#include<iostream>
#include "Square.h"


void main() {
	Square q1(4, 5, 5);
	cout << q1.calculateS() << endl;
	cout << q1.isIn(5, 6) << endl;
	
	Square q2(8, 9, 5);
	cout << q2.calculateS();

}