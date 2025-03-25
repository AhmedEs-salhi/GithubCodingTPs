#include <iostream>
using namespace std;

int main(void)
{
    string str = "Semestre";

    cout << "The original string: " << str << endl;

    
    for (auto &ch : str)
    {
        if (isupper(ch))
            ch = tolower(ch);
        else
            ch = toupper(ch);
    }
    
    //str = toupper(str);
    cout << "The string after transformation: " << str << endl;

    return 0;
}

