#include <iostream>
using namespace std;

void Appel()
{
    static int callTimes = 0;
    callTimes++;
    cout << "Appel numero " << callTimes << endl;
}

int main()
{
    char ch;

    do
    {
        cout << "Pour faire appel a la fonction 'Appel', tapez 'o'.  Sinon, tapez autre chose :";
        cin >> ch;
        if (ch == 'o')
            Appel();    
    } while (ch == 'o');
    
    return 0;
}