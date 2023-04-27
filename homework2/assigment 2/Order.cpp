#include "Order.h"
#include "Item.h"
#include "Date.h"

Order::Order(int day, int month, int year):OrderDate(day,month,year)
{
	
}

Order::Order(const Order& CopyObj) : ItemPtr(CopyObj.ItemPtr), ArrSize(CopyObj.ArrSize), OrderDate(CopyObj.OrderDate)
{

}

Item** Order::GetItemPtr() const
{
	return this->ItemPtr;
}

int Order::GetArrSize() const
{
	return this->ArrSize;
}

Date Order::GetOrderDate() const
{
	return this->OrderDate;
}

void Order::SetItemPtr(Item** Product)
{
	this->ItemPtr = Product;
}

void Order::SetArrSize(int size)
{
	this->ArrSize = size;
}

void Order::SetOrderDate(Date date)
{
	this->OrderDate = date;
}

void Order::AddProd(Product* prod, int amount)
{
	int count =0, i = 0;
	for (; i < this->ArrSize; i++)
	{
		if (prod->GetProductName() == this->ItemPtr[i]->GetProductArr()->GetProductName())
		{
			count = 1;
			this->ItemPtr[i]->SetTakenItem(amount);
			break;
		}
	}
	if (!count)
	{
		Item* item = new Item(prod, amount);
		this->ItemPtr[this->ArrSize] = item;
		this->ArrSize++;
	}
	else
		cout << "There is a duplicate of names !";
}

void Order::UpdateAmount(int ID, int Amount)
{
	for (int i = 0; i < this->ArrSize; i++)
	{
		if (this->ItemPtr[i]->GetProductArr()->GetIDUser() == ID)
		{
			this->ItemPtr[i]->GetProductArr()->SetProductCount(Amount);
			break;
		}
	}
}

double Order::OrderPayment()
{
	double price = 0;
	for (int i = 0; i < this->ArrSize; i++)
	{
		price += this->ItemPtr[i]->TotalPrice();
	}
	return price;
}

void Order::PrintOrder()
{
	cout << "Order date is:"; this->OrderDate.printDate(); cout << endl;
	cout << "Total order cost is:" << this->OrderPayment(); cout << endl;
	for (int i = 0; i < this->ArrSize; i++)
	{
		this->ItemPtr[i]->PrintInfo();
		cout << "\n";
	}
}
