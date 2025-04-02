#include <iostream>
#include <list>
#define MAX_SIZE 10

using std::cin;
using std::cout;
using std::endl;
using std::list;

void printList(list<int> list, int size)
{
	int counter(0);

	cout << "\nList Output:\n[";
	for (int number : list)
	{
		cout << number;
		if (counter++ < size - 1)
			cout << ", ";
	}
	cout << "]" << endl;
}

int main(void)
{
	list<int> List(0);
	int choice;
	int newNumber;
	int counter(0);
	
	do {
		cout << "-------------------\n\tMENU\n-------------------\n";
		cout << "1. Add a number\n";
		cout << "2. Print the list\n";
		cout << "3. Remove the last element of the list\n";
		cout << "4. Print the last element inserted\n";
		cout << "5. Quite" << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		
		if (choice == 1)
		{
			cout << "Number you want to add: ";
			cin >> newNumber;
			List.push_back(newNumber);
		}
		else if (choice == 2)
			printList(List, List.size());
		else if (choice == 3)
			List.pop_back();
		else if (choice == 4)
			cout << "Last Element in the list: " << List.back() << endl;
		else
		{
			cout << "Invalid choice\n";
			continue;
		}
	} while (choice != 5);
	return 0;
}
