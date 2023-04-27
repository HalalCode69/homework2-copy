#include "Item.h"

Item::Item(Product* Parr, int amount): ProdPtr(Parr),TakenItem(amount)
{

}

int Item::GetTakenItem()const
{
	return this->TakenItem;
}

Product* Item::GetProductArr()const
{
	return this->ProdPtr;
}

void Item::SetProductArr(Product* Prod)
{
	this->ProdPtr = Prod;
}

void Item::SetTakenItem(int Taken)
{
	this->TakenItem = Taken;
}


double Item::TotalPrice()
{
	return this->TakenItem * this->ProdPtr->GetPriceEach();
}

int Item::ItemId()
{
	return this->ProdPtr->GetIDUser();
}


void Item::PrintInfo()
{
	cout << "( Product Name :" << this->ProdPtr->GetProductName() << ", Product ID :" << this->ProdPtr->GetIDUser() << ", Product Amount :" << this->ProdPtr->GetIDUser() << ", Product Price :" << this->ProdPtr->GetPriceEach() << ", Product Taken :" << this->TakenItem << ", TotalPrice :" << this->TotalPrice() << " )";
}