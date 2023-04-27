#include "Product.h"
int Product::ProductCount = 0;
Product::Product(string prodname, double price):ProductName(prodname),PriceEach(price)
{
	SetIDUser(this->ProductCount);
	this->ProductCount++;
}

string Product::GetProductName() const
{
	return this->ProductName;
}

int Product::GetIDUser() const
{
	return this->IDUser;
}

int Product::GetProductCount() const
{
	return this->ProductCount;
}

double Product::GetPriceEach() const
{
	return this->PriceEach;
}

void Product::SetProductName(string name)
{
	this->ProductName = name;
}

void Product::SetIDUser(int id)
{
	this->IDUser = id;
}

void Product::SetProductCount(int count)
{
	this->ProductCount = count;
}

void Product::SetPriceEach(double price)
{
	this->PriceEach = price;
}

void Product::UpdatePriceEach(double newprice)
{
	this->PriceEach = this->PriceEach + this->PriceEach * newprice / 100;
}

void Product::PrintProd() const
{
	cout << "( " << this->ProductName <<", " << this->IDUser << ", " << this->ProductCount << ", " << this->PriceEach << " )";
}
