#include <iostream>
using namespace std;

int main(void) 
{
    int valeur, premierZero, somme, quantiteNbr;
    float moyenne;

    somme = 0;
    quantiteNbr = 0;
    moyenne = 0;
    premierZero = 0;

    do {
        cout << "Entrer votre valeur: ";
        cin >> valeur;
        if (valeur == 0 && premierZero == 0)
        {
            cout << "PAS DE MOYENNE\n";
            continue;
        }
        
        if (valeur < 0)
        {
            cout << "ERREUR. VALEUR NEGATIF!\n";
            continue;
        }
        if (valeur > 0)
        {
            premierZero++;
            somme += valeur;
            quantiteNbr++;
        }

    } while (valeur != 0 || premierZero == 0);

    moyenne = (float)somme / quantiteNbr;

    ::cout << "Moyenne = " << moyenne << endl;

    return 0;
}