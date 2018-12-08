#include "Customer.h"




double Customer::Getbalance() const {
	return this->balance;
}
//const char& Customer::GetName() const {
//	return this->name;
//}
int Customer::GetaccountNumber() const {
	return this->accountNumber;
}
void Customer::setbalance(double newBalance) {
	balance = newBalance;
}
void Customer::setName(char newName[]) {
	name = newName;
}




Customer::Customer(char* name, double balance) :accountNumber(counter++) {
	this->balance = balance;
	this->name = name;

}


Customer::~Customer()
{
}
