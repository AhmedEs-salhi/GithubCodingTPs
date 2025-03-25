#include <iostream>
using namespace std;

int main(void)
{
    string str;
    int i;
    cout << "Saisie une chaine: ";
    getline(cin, str);
    
    i = 0;
    for (auto ch: str)
    {
        if (int(ch) == 32)
        {
            str[i++] = 32;
            continue;
        }
        str[i++] = char(int(ch) + 1);
    }
    cout << "Votre chaine aprés le traitement: " << str << endl;

    return 0;
}