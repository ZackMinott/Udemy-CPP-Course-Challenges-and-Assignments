#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n)
{
	if (n == 0)
		return 1;					//base case
	return n * factorial(n - 1);  //recursive case
}

int main()
{
	// THIS IS A FACTORIAL EXAMPLE 

	//Base case: factorial(0) = 1
	//Recursive case: factorial(n) = n * factorial(n - 1)

	cout << factorial(3) << endl; //6
	cout << factorial(8) << endl; //40320

	system("pause");
	return 0;
}