#include "Product.h"
#include "Item.h"
#include "Date.h"

class Order
{
	Item** ItemPtr = new Item*;
	int ArrSize =0;
	Date OrderDate;
public:
	Order(int = 0, int = 0, int = 0);
	Order(const Order&);

	Item** GetItemPtr() const;
	int GetArrSize() const;
	Date GetOrderDate() const;

	void SetItemPtr(Item**);
	void SetArrSize(int);
	void SetOrderDate(Date);

	void AddProd(Product*,int);
	void UpdateAmount(int, int);
	double OrderPayment();
	void PrintOrder();
};

