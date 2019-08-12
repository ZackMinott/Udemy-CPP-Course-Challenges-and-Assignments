#include <iostream>

using namespace std;

//FIBONACCI SEQUENCE


//Base case: Fib(0) = 0, Fib(1) = 1
//Recursive case: Fib(n) = Fib(n-1) + Fib(n-2)

unsigned long long fibonacci(unsigned long long n)
{
	if (n <= 1)
		return n;  //base cases
	return fibonacci(n - 1) + fibonacci(n - 2); //recursion
}

int main()
{
	cout << fibonacci(5) << endl; //5
	cout << fibonacci(30) << endl; //832040
	cout << fibonacci(40) << endl; //102334155

	system("pause");
	return 0;
}