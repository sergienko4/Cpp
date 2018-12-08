#include "Node.h"



Node::Node(Customer newCustomer, Node* next) :value(newCustomer){
	this->next = next;
}


Node::~Node()
{
}
