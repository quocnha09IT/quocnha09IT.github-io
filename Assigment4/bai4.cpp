#include <iostream>
using namespace std;

class Inventory
{
	private:
		int itemNumber;
		int quantity;
		double cost;
	    double totalCost;
	public:
		Inventory()
		{
			itemNumber = 0;
			quantity = 0;
			cost = 0;
			totalCost = 0;

		}
		Inventory(int itemNumber, int quantity, double cost)
		{
			itemNumber = getItemNumber();
			quantity = getQuantity();
			cost = getCost();
			setTotalCost(quantity, cost);
		}

		void setItemNumber(int)
		{
			itemNumber = itemNumber;
		}
		void setQuantity(int)
		{
			quantity = quantity;
		}
		void setCost(double)
		{
			cost = cost;
		}
		void setTotalCost(int, double)
		{
			totalCost = quantity * cost;
		}

		int getItemNumber()
		{
			return itemNumber;
		}
		int getQuantity()
		{
			return quantity;
		}
		double getCost()
		{
			return cost;
		}
		double getTotalCost()
		{
			return totalCost;
		}
};


	int main()
{
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;

	cout << "nhap vao so luong Item: ";
	cin >> itemNumber;
	while (itemNumber < 0)
	{
		cout << "Nhap gia tri cho mat hang: ";
		cin >> itemNumber;
	}
	cout << "Nhap so luong hang: ";
	cin >> quantity;
	while (quantity < 0)
	{
		cout << "Nhap gia tri cho mat hangf: ";
		cin >> quantity;
	}
	cout << "Nhap chi phi cua mat hang: ";
	cin >> cost;
	while (cost < 0)
	{
		cout << "Nhap gia tri cho mat hang: ";
		cin >> cost;
	}

	Inventory information(itemNumber, quantity, cost);

	totalCost = information.getTotalCost();
	itemNumber = information.getItemNumber();
	cost = information.getCost();
	quantity = information.getQuantity();
	cout << "So luong Item : " << itemNumber << endl;
	cout << "So luong: " << quantity << endl;
	cout << "Gia: " << cost << endl;
	cout << "Tong gia: " << totalCost << endl;
	
	return 0;
}


