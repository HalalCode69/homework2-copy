#include "Customer.h"

int main()
{
	Product** productArray = new Product * [5];
	productArray[0] = new Product("Cottage", 6.5);
	productArray[1] = new Product("milky", 4);
	productArray[2] = new Product("milk", 8.3);
	productArray[3] = new Product("bread", 10.9);
	productArray[4] = new Product("eggs", 13.7);
	Customer** customerArray = new Customer * [3];
	customerArray[0] = new Customer("moshe", "054-4545457");
	customerArray[1] = new Customer("david", "054-9876543");
	customerArray[2] = new Customer("israel", "052-1287652");

	Order MosheOrder(2, 8, 2023);
	MosheOrder.AddProd(productArray[0], 2);
	MosheOrder.AddProd(productArray[2], 1);
	MosheOrder.PrintOrder();

	Order DavidOrder(3, 8, 2023);
	DavidOrder.AddProd(productArray[3], 2);
	DavidOrder.AddProd(productArray[2], 1);
	DavidOrder.PrintOrder();

	Order IsraelOrder(4, 8, 2023);
	IsraelOrder.AddProd(productArray[1], 4);
	IsraelOrder.AddProd(productArray[4], 1);
	IsraelOrder.PrintOrder();

	Item MosheItems;
	if (MosheOrder.GetItemPtr())
	
}