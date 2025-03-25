#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> vec, int size)
{
        int counter(0);

        cout << "\nList Output:\n[";
        for (int number : vec)
        {
                cout << number;
                if (counter++ < size - 1)
                        cout << ", ";
        }
        cout << "]" << endl;
}

int main(void)
{
	vector<int> l = {1, 2, 3, 4};
	int toRemove;

	//toRemove = find(l.front(), l.back(), 3);

	printVector(l, l.size());
	
	cout << "Enter the value to remove: ";
	cin >> toRemove;
	auto findResult = find(l.begin(), l.end(), toRemove);
	
	//cout << findResult << endl;
	if (findResult != l.end())
	{
		cout << "Element found at the index: " << distance(l.begin(), findResult) << endl;
		l.erase(findResult);
		l.push_back(0);
	}
	else if (findResult == l.end())
		cout << "Element not found\n";
	printVector(l, l.size());

	return 0;
}