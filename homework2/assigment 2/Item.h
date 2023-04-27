#pragma once
#include "Product.h"

class Item
{
	Product* ProdPtr;
	int TakenItem;
public:
	Item(Product* = NULL, int = 0);
	Product* GetProductArr() const;
	int GetTakenItem() const;
	void SetProductArr(Product*);
	void SetTakenItem(int);

	double TotalPrice();
	int ItemId();
	void PrintInfo();
};

