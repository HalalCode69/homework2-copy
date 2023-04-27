#pragma once
#include "Order.h"
class Customer
{
	string CustomerName;
	string PhoneNumb;
	Order** OrderPtr = new Order*;
	int OrderSize;
public:
	Customer(string, string);
	string GetCustomerName() const;
	string GetPhoneNumb()const;
	Order** GetOrder()const;
	int GetOrderSize()const;

	void SetCustomerName(string);
	void SetPhoneNumb(string);
	void Setorder(Order**);
	void SetOrderSize(int);

	void AddToOrder(Item**);
	double CostPrice(Date);
	void PrintCustomer()const;
};

