#include <iostream>

using namespace std;


int* apply_all(const int const *arr1, size_t size1, const int const *arr2, size_t size2)
{
	int *temp{}; //pointer intialized to nullptr
	temp = new int[size1 * size2]; //We have to initialize the pointer's size so we can dynamically fit values in there

	int count{ 0 };
	//iterate through both arrays multiplying each value of array2 into each value of array 1
	for(size_t i{0}; i < size2; ++i)
	{
		for(size_t j{0}; j <size1; ++j)
		{
			temp[count] = arr1[j] * arr2[i];
			count++;
		}
	}

	return temp;
}

void print(const int *arr, size_t size)
{
	cout << "[ ";
	for(size_t i{0}; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}

int main()
{
	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1,2,3,4,5 };
	int array2[]{ 10,20,30 };

	cout << "Array 1: ";
	print(array1, array1_size);

	cout << "Array 2: ";
	print(array2, array2_size);

	int *results = apply_all(array1, 5, array2, 3);
	constexpr size_t results_size{ array1_size * array2_size };

	cout << "result: ";
	print(results, results_size);

	delete[] results;

	system("pause");
	return 0;
}
