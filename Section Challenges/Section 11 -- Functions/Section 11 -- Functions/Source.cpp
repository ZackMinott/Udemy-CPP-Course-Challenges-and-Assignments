#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

//Menu handling function prototypes
void display_menu();
char get_selection();

void handle_display(vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);
void handle_find(const vector<int> &v);
void handle_quit();
void handle_unknown();

bool find(const vector<int> &v, int target);


// displays the menu to the console
void display_menu()
{
	std::cout << "==============================================" << endl;
	std::cout << "P - Print numbers" << endl;
	std::cout << "A - Add a number" << endl;
	std::cout << "M - Display mean of the numbers" << endl;
	std::cout << "S - Display the smallest number" << endl;
	std::cout << "L - Display the largest number" << endl;
	std::cout << "F - Find a Number" << endl;
	std::cout << "Q - Quit" << endl;
	std::cout << "==============================================" << endl;
	std::cout << "Enter your choice: ";
	std::cout << endl;
}

// simply reads a character selection 
char get_selection()
{
	char selection{};
	cin >> selection;
	return toupper(selection);
}

void handle_display(vector<int> &numbers) {
	if (numbers.empty()) {
		std::cout << "[] - The list is empty";
	}
	else {
		std::cout << "[";
		for (auto val : numbers)
			std::cout << val << " ";
		std::cout << "]" << endl;
	}
}

void handle_add(vector<int> &numbers) {
	int temp{};

	std::cout << "Enter the integer you want to add: ";
	cin >> temp;
	numbers.push_back(temp);
	std::cout << temp << " added to the list!!!" << endl;
}

void handle_mean(vector<int> &numbers) {
	int mean{};
	if (numbers.empty())
		std::cout << "Unable to calculate mean -- the list is empty" << endl;
	else {
		for (auto val : numbers)
			mean += val;

		mean = static_cast<double> (mean) / numbers.size();
		std::cout << "The mean of all the values: " << mean << endl;
	}

}

void handle_smallest(vector<int> &numbers) {

	if (numbers.empty()) {
		cout << "vector is empty";
	}
	else {
		int temp{};

		temp = numbers.at(0);
		for (auto val : numbers) {
			if (val < temp)
				temp = val;
		}

		std::cout << "Smallest Number: " << temp << endl;
	}
}

void handle_largest(vector<int> &numbers)
{
	if (numbers.empty()) {
		cout << "vector is empty";
	}
	else {
		int temp{};

		temp = numbers.at(0);
		for (auto val : numbers) {
			if (val > temp)
				temp = val;
		}

		std::cout << "Largest Number: " << temp << endl;
	}
}

void handle_quit()
{
	cout << "Goodbye!!" << endl;
}

void handle_unknown()
{
	cout << "Sorry the selection is INVALID" << endl;
}


void handle_find(const vector<int> &numbers)
{
	int target{};
	cout << "Enter the number to find: ";
	cin >> target;

	if (find(numbers, target))
		cout << target << " was found" << endl;
	else
		cout << target << " wasn't found" << endl;
}

bool find(const vector<int> &v, int target)
{
	for(auto num: v)
	{
		if (num == target)
			return true;
	}

	return false;
}


int main()
{
	vector<int> nums{}; //our list of numbers
	char choice{};

	do
	{
		display_menu();
		choice = get_selection();
		switch (choice)
		{
		case 'P':
			handle_display(nums);
			break;
		case 'A':
			handle_add(nums);
			break;
		case'M':
			handle_mean(nums);
			break;
		case'S':
			handle_smallest(nums);
			break;
		case 'L':
			handle_largest(nums);
			break;
		case 'F':
			handle_find(nums);
			break;
		case 'Q':
			handle_quit();
			break;
		default:
			handle_unknown();
		}


	} while (choice != 'Q');

	cout << endl;

	system("pause");
	return 0;
	

}