#include <iostream>
using namespace std;

void afficherMenu(void)
{
    cout << "\n=====================================\n";
    cout << "\t\tMENU\n";
    cout << "=====================================\n";
    cout << "1. Tapez 1 pour incrementer l'entier par un\n";
    cout << "2. Tapez 2 pour décrementer l'entier par 2\n";
    cout << "3. Tapez 3 pour multipliez l'entier par 10\n";
    cout << "4. Tapez 4 pour quiter\n";
}

int main(void)
{
    int choix, result;

    result = 0;
    do {
        afficherMenu();
        cout << "\nEntrer votre choix: ";
        cin >> choix;
        if (choix <= 0 || choix > 4)
        {
            cout << "CHOIX INVALID!\n";
            continue;
        }
        switch (choix)
        {
            case 1: result++;
            break;
            case 2: result -= 2;
            break;
            case 3: result *= 10;
            break;
        }
        cout << "resultat: " << result << endl;
    } while (choix != 4);

    return 0;
}