#include <iostream>
using namespace std;

int main(void)
{
    string vowels = "aeiouy";
    string str; // = "Ahmedeesiu";
    int vowelsCount = 0;

    cout << "Your string: ";
    getline(cin, str);

    for (auto ch: str)
        for (auto c: vowels)
            if (c == ch || ch == toupper(c))
                vowelsCount++;
    cout << "Number of vowels is: " << vowelsCount << endl;

    return 0;
}