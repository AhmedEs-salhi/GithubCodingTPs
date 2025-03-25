#include <iostream>
using namespace std;

int main(void)
{
    string str;
    string reversed;
    int size, i, j;

    cout << "Your string: ";
    getline(cin, str);

    reversed = str;
    i = str.length() - 1;
    j = 0;
    
    for (auto c: str)
        reversed.at(j++) = str.at(i--);
    cout << "Reversed: " << reversed << endl;
    return 0;
}