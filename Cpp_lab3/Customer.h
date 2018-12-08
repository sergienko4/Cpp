#pragma once

static int counter = 1;

class Customer
{
private:
	char* name;
	double balance;
	const int accountNumber;

public:

	double Getbalance() const;
	//char* GetName() const;
	int GetaccountNumber() const;


	void  setbalance(double);
	void  setName(char[]);




	Customer(char[], double = 0);
	~Customer();
};

