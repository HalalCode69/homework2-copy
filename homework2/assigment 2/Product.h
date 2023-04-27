#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Product
{
	string ProductName;
	int IDUser;
	static int ProductCount;
	double PriceEach;
public:
	Product(string = "", double = 0.0);
	string GetProductName()const;
	int GetIDUser()const;
	int GetProductCount()const;
	double GetPriceEach()const;
	void SetProductName(string);
	void SetIDUser(int);
	void SetProductCount(int);
	void SetPriceEach(double);
	void UpdatePriceEach(double);
	void PrintProd()const;


};

