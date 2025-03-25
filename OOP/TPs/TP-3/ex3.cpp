#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

double func(double x, bool *ok)
{
    double result;

    if (x >= 1 && x <= 2)
    {
        *ok = true;
        result = sqrt((x-1)*(2-x));
    }
    else
        *ok = false;
    return result;
    
}

int main(void)
{
    double func(double, bool *);
    double result;
    double x;
    bool ok;

    cout << "Tapez un double: ";
    cin >> x;
    ok = true;

    result = func(x, &ok);
    if (ok == false)
        cout << "La fonction n'est pas définie au point " << x << endl;
    else
    {
        cout << "La fonction est definie au point " << x << endl;
        cout << "f(" << x << ") = " << result << endl;
    }

    return 0;
}