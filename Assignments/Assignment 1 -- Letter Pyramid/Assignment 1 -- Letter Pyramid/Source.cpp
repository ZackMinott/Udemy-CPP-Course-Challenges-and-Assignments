#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pyramid_string{};

	cout << "Please enter a string you want converted into a pyramid: ";
	cin >> pyramid_string;

	size_t rows = pyramid_string.length();

	for(size_t i {1}; i <= rows; i++)
	{
		string temp{};
		for(size_t space {1}; space <= rows - i; space ++)
		{
			cout << " ";
		}

		for(size_t j{0}; j < i; j++)
		{
			temp += pyramid_string.at(j);
		}

		if(i > 1)
		{
			for (size_t k{ i - 2}; k >= 0; k--)
			{
				temp += pyramid_string.at(k);

				if (k == 0)
					break;
			}
		}
		


		cout << temp << endl;

		
	}
	
	system("pause");
	return 0;
}