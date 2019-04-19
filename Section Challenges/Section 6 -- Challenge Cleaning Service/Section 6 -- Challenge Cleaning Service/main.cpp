#include <iostream>

using namespace std;

int main()
{
	cout << "Hello, welcome to Zack's Carpet Cleaning Service" << endl << endl;
	cout << "How many small rooms would you like cleaned? ";
	int smallRooms { 0 };
	cin >> smallRooms;
	cout << "How many large rooms would you like cleaned? ";
	int largeRooms { 0 };
	cin >> largeRooms;

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << smallRooms << endl;
	cout << "Number of large rooms: " << largeRooms << endl;

	const double priceSmallRoom{ 25.50 };
	const double priceLargeRoom{ 37.50 };
	const float taxRate{ 0.10 };
	const int validity{ 30 };

	double cost = (smallRooms * priceSmallRoom) + (largeRooms * priceLargeRoom);
	double tax = cost * taxRate;
	double totalCost = cost + tax;

	cout << "Price per small room: $" << priceSmallRoom << endl;
	cout << "Price per large room: $" << priceLargeRoom << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "============================================" << endl;
	cout << "Total Estimate: $" << totalCost << endl;
	cout << "This estimate is valid for " << validity << " days" << endl;

	system("pause");
	return 0;
}