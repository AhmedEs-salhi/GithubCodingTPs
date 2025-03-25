#include <iostream>
using namespace std;

int main(void)
{
    string str;
    string newStr;
    int i;
    cout << "Saisir une chaine: ";
    getline(cin, str);

    for (auto ch: str)
    {
        if ((int(ch) >= 65 && int(ch) <= 90) || int(ch) >= 97 && int(ch) <= 122)
            newStr[i++] = ch;
        else if (int(ch) == 32)
        {
            newStr[i++] = ' ';
            continue;
        }
        
    }
    cout << "Votre chaine apres traitement: " << newStr << endl;
    return 0;
}