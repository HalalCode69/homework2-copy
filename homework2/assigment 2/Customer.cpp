#define _CRT_SECURE_NO_WARNINGS
#include "Customer.h"

Customer::Customer(string name,string phone):CustomerName(name), PhoneNumb(phone)
{

}

string Customer::GetCustomerName()const
{
	return this->CustomerName;
}

string Customer::GetPhoneNumb()const
{
	return this->PhoneNumb;
}

Order** Customer::GetOrder()const
{
	return this->OrderPtr;
}

int Customer::GetOrderSize()const
{
	return this->OrderSize;
}

void Customer::SetCustomerName(string Name)
{
	this->CustomerName = Name;
}

void Customer::SetPhoneNumb(string Phone)
{
	this->CustomerName = Phone;
}

void Customer::Setorder(Order** OrderPtr)
{
	this->OrderPtr = OrderPtr;
}

void Customer::SetOrderSize(int size)
{
	this->OrderSize = size;
}

void Customer::AddToOrder(Item** ItemArr)
{
	for (int i = 0; i < this->OrderSize; i++)
	{

	}
}

double Customer::CostPrice(Date date)
{
	for (int i = 0; i < this->OrderSize; i++)
	{
		if (OrderPtr[i]->GetOrderDate().getDay() == date.getDay() && OrderPtr[i]->GetOrderDate().getMonth() == date.getMonth() && OrderPtr[i]->GetOrderDate().getYear() == date.getYear())
		{
			return OrderPtr[i]->OrderPayment();
		}
	}
	cout << "No orders have been found on this date.";
	return -1;
}

void Customer::PrintCustomer() const
{
	cout << "customer name : " << this->CustomerName << endl;
	cout << "customer phone : " << this->PhoneNumb << endl;
	for (int i = 0; i < this->OrderSize; i++)
	{
		this->OrderPtr[i]->PrintOrder();
	}
}
