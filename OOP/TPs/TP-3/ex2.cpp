#include <iostream>
using namespace std;

void switchParVal(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void switchParPtr(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void switchParRef(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    int &refA = a;
    int &refB = b;

    cout << "Saisir l'entier A: ";
    cin >> a;
    cout << "Saisir l'entier B: ";
    cin >> b;

    cout << "\n=====Avant l'appel de la fonction d'echange=====\n";
    cout << "a = " << a << " et b = " << b << endl;
    cout << "*****Transmission par valeur*****\n";
    cout << "=====Apres l'appel de la fonction d'echange=====\n";
    switchParVal(a, b);
    cout << "a = " << a << " et b = " << b << endl;

    cout << "\n=====Avant l'appel de la fonction d'echange=====\n";
    cout << "a = " << a << " et b = " << b << endl;
    cout << "*****Transmission par referance*****\n";
    cout << "=====Apres l'appel de la fonction d'echange=====\n";
    switchParRef(refA, refB);
    cout << "a = " << a << " et b = " << b << endl;

    cout << "\n=====Avant l'appel de la fonction d'echange=====\n";
    cout << "a = " << a << " et b = " << b << endl;
    cout << "*****Transmission par adresse*****\n";
    cout << "=====Apres l'appel de la fonction d'echange=====\n";
    switchParPtr(&a, &b);
    cout << "a = " << a << " et b = " << b << endl;

    return 0;
}