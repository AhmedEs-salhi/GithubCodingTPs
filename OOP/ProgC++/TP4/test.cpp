#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> array, int size)
{
	int counter(0);

	cout << "\nArray Output: \n[";
	for (int number : array)
	{
		cout << number;
		if (counter++ < size - 1)
			cout << ", ";
	}
	cout << "]" << endl;
}

int main(void)
{
	int size;
	cout << "Size: ";
	cin >> size;
	//int *array = new int[size];
	vector<int> v(size);

	for (int number : v)
		cin >> number;
	//size = sizeof(v) / sizeof(v[0]);
	printArray(v, v.size());
	v.push_back(1024);
	//size = sizeof(v) / sizeof(v[0]);
	printArray(v, v.size());
	cout << endl;

	/*delete[] array;*/
	return 0;
}
