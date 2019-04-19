#include <iostream>

using namespace std;

int main()
{
	int money{};

	cout << "Enter an amount in cents: ";
	cin >> money;

	int dollars{};
	int quarters{};
	int dimes{};
	int nickels{};
	int pennies{};


	while (money > 0)
	{
		if(money / 100 != 0)
		{
			dollars = money / 100;
			money -= dollars * 100;
		} else if(money / 25 != 0)
		{
			quarters = money / 25;
			money -= quarters * 25;
		} else if(money / 10 != 0)
		{
			dimes = money / 10;
			money -= dimes * 10;
		} else if(money / 5 != 0)
		{
			nickels = money / 5;
			money -= nickels * 5;
		} else if (money / 1 != 0)
		{
			pennies = money;
			money -= pennies;
		}
	}

	

	cout << "You can provide the change as follows:	" << endl;
	cout << "dollars    : " << dollars << endl;
	cout << "quarters   : " << quarters << endl;
	cout << "dimes      : " << dimes << endl;
	cout << "nickels    : " << nickels << endl;
	cout << "pennies    : " << pennies << endl;

	system("pause");
	return 0;
}