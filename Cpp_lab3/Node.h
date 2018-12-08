#pragma once
#include <iostream>
#include "Customer.h"
using namespace std;


class Node
{
private:
	Customer value;
	Node* next;
	

public:
	Node(Customer, Node* = NULL);
	~Node();
};

