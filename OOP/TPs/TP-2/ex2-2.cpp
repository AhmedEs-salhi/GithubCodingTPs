#include <iostream>
using namespace std;

int main(void)
{
    string str;
    int wordCount = 0;

    cout << "Your string: ";
    getline(cin, str);
    
    for (auto ch: str)
        if (isspace(ch))
            wordCount++;
    cout << "Number of words is: " << wordCount << endl;

    return 0;
}