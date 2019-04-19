#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "Contents of vector 1: " << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "Vector 1 size is: " << vector1.size() << endl;

	//Vector 2 push_back
	vector2.push_back(100);
	vector2.push_back(200);

	cout << "\nContents of vector 2: " << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << "Vector 2 size is: " << vector2.size() << endl;

	vector <vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	
	cout << "\nvector_2d: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;

	cout << "\nUpdating vector 1..." << endl;

	cout << "\nvector_2d updated: " << endl;
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

	cout << "\nContents of vector 1 updated: " << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "Vector 1 size is: " << vector1.size() << endl;


	
	system("pause");
	return 0;
}