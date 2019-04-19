#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	
	char choice{};
	int temp{};
	double mean{};
	vector<int> vec {};
	do
	{
		std::cout << "==============================================" << endl;
		std::cout << "P - Print numbers" << endl;
		std::cout << "A - Add a number" << endl;
		std::cout << "M - Display mean of the numbers" << endl;
		std::cout << "S - Display the smallest number" << endl;
		std::cout << "L - Display the largest number" << endl;
		std::cout << "Q - Quit" << endl;
		std::cout << "\nEnter your choice: ";
		cin >> choice;
		std::cout << "==============================================" << endl;
		std::cout << endl;

		switch(choice)
		{
		case 'p':
		case 'P':
			if(vec.size() == 0)
			{
				std::cout << "[] - the list is empty" << endl;
			} else
			{
				std::cout << "[ ";
				for (auto val : vec)
					std::cout << val << " ";
				std::cout << "]" << endl;
			}		
			break;
		case 'a':
		case 'A':
			std::cout << "Enter the integer you want to add: ";
			cin >> temp;
			vec.push_back(temp);
			std::cout << temp << " added to the list!!!" << endl;
			break;
		case 'm':
		case 'M':
			for(auto val:vec)
			{
				mean += val;
			}
			mean /= vec.size();
			std::cout << "The mean of all the values: " << mean << endl;
			break;
		case 's':
		case 'S':
			temp = vec.at(0);
			for(auto val:vec)
			{
				if(val < temp)
				{
					temp = val;
				}
			}
			std::cout << "Smallest Number: " << temp << endl;
			break;
		case 'l':
		case 'L':
			temp = vec.at(0);
			for(auto val:vec)
			{
				if(val > temp)
				{
					temp = val;
				}
			}
			std::cout << "Largest Number: " << temp << endl;
			break;
		case 'q':
		case 'Q':
			std::cout << "Goodbye!!" << endl;
			break;
		default:
			std::cout << "Unknown entry -- Please try again" << endl;
			break;
		}

		std::cout << endl;

	} while (choice != 'q' && choice != 'Q');

	std::system("pause");
	return 0;
}