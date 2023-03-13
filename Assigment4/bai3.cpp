#include <iostream>
#include <string>

class RetailItem
{
private:
	std::string description;
	int unitsOnHand;
	double price;

public:

	RetailItem() {
		description = "<Empty>";
		unitsOnHand = 0;
		price = 0;
	}

	RetailItem(std::string desc, int qty, double cost) {
		description = desc;
		unitsOnHand = qty;
		price = cost;
	}

	std::string getDescription() { return description; }
	int getUnits() { return unitsOnHand; }
	double getPrice() { return price;	}

	void SetDescription(std::string desc) { description = desc; }
	void SetUnits(int qty) { unitsOnHand = qty; }
	void SetPrice(double cost) { price = cost; }
};

int main()
{


	RetailItem Items[6];


	Items[0].SetDescription("Jacket");
	Items[0].SetUnits(12);
	Items[0].SetPrice(59.95);

    Items[1].SetDescription("nha");
	Items[1].SetUnits(1);
	Items[1].SetPrice(5.95);

    Items[2].SetDescription("depchai");
	Items[2].SetUnits(20);
	Items[2].SetPrice(30);
	RetailItem Item1("Jacket", 12, 59.95);
	RetailItem Item2("nha", 4, 78.95);
	RetailItem Item3("depchai", 2, 3.95);


	for (int i = 0; i <= 2; i++)
		std::cout << "Item: " << Items[i].getDescription() << ", Qty: " <<
		Items[i].getUnits() << ", Price: " << Items[i].getPrice() << std::endl;

	std::cout << std::endl << "Item: " << Item1.getDescription() << ", Qty: " <<
		Item1.getUnits() << ", Price: " << Item1.getPrice() << std::endl;

	return 0;
}