#include <iostream>
using namespace std;

int main(void)
{
    string str, str2, stringToModifie;
    int i, j, spaceTracker;
    string modifiedString = "POO C++";

    if (str.empty())
    {
        cout << "Chaine initialiser par les parametres par defaut" << endl;
        str = "Module Programmation C Avancee";
    }
    else
        cout << "Chaine n'est Pas vide !!" << endl;
    
    str2 = str;

    for (i = 1, j = 1; i < str.length(); i++)
    {
        spaceTracker = i;
        if (isspace(str[spaceTracker]))
            str2[j++] = str[++spaceTracker];
    }
    str2.erase(str2.begin() + j, str2.begin() + str2.length());
    cout << "New string: " << str2 << endl;

    cout << "Entrer le morceau a modifier dans le string: ";
    getline(cin, stringToModifie);

    if (str.find(stringToModifie) == string::npos)
    {
        cout << "The string \"" << str << "\" doesn't contain \"" << stringToModifie << "\"" << endl;
    }
    else
    {
        str = str.substr(0, str.length() - stringToModifie.length());
        str.append(modifiedString);
        cout << "New string: " << str << endl;
    }

    return 0;
}