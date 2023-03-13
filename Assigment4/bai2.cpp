#include <iostream>
#include <string>
using namespace std;

class Car
{
	private:
		string make;
		int year;
		int speed;

	public:
		Car(int y, string model)
		{
			year = y;
			make = model;
			speed = 0;
		}
		int getYear()
		{
			return year;
		}
		string getMake()
		{
			return make;
		}
		int getSpeed()
		{
			return speed;
		}
		int accelerate()
		{
			return speed += 5;
		}
		int carBreak()
		{
			return speed -= 5;
		}
};


int main()
{
	int year;
	string make;

	cout << "What year is your car? ";
	cin >> year;

	cout << "What is your car model? ";
	cin >> make;


	Car suv(2005, "Explorer"), sedan(year,make);


	
	cout << endl << "Sedan information" << endl;
	for (int x = 1; x <= 5; x++)
	{
		cout << sedan.accelerate() << endl;
	}
	cout << "Your speed is " << sedan.getSpeed() << " for the car model of " << sedan.getMake() << endl;
	for (int x = 1; x <= 5; x++)
	{
		sedan.carBreak();
	}
	cout << "You stopped the car with a speed of " << sedan.getSpeed() << endl;



	cout << endl << "SUV information" << endl;
	cout << suv.getMake() << endl;
	cout << suv.getYear() << endl;
	for (int x = 1; x <= 20; x++)
	{
		suv.accelerate();
	}
	cout << "Your speed for the SUV is " << suv.getSpeed() << endl;


	return 0;
}