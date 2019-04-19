#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ " };
	string key{ "!@#$%^&*()_+-=1234567890?><~`zfgIeqrpKbvcoOXxZy|HhVY." };
	string secret{};

	cout << "Please enter your secret message: ";
	getline(cin, secret);

	cout << "ENCODING...\n" << endl;

	for(size_t i{0}; i < secret.length(); i++)
	{	
		int tempPosition = alphabet.find(secret.at(i));
		secret.at(i) = key.at(tempPosition);		
	}

	cout << "The encoded message is: " << secret << endl;

	cout << "\nDECODING...\n" << endl;

	for(size_t i{0}; i < secret.length(); i++)
	{
		int tempPosition = key.find(secret.at(i));
		secret.at(i) = alphabet.at(tempPosition);	
	}

	cout << "The original secret message was: " << secret << endl;




	system("pause");
	return 0;
}