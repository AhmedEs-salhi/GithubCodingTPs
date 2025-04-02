#include <iostream>
using std::cout;
using std::cin;
using std::endl;

namespace global
{
    namespace entier 
    {
        int add(int x, int y)
        {
            return x + y;
        }

        int sub(int x, int y)
        {
            return x - y;
        }
    }

    namespace reel
    {
        double add(double x, double y)
        {
            return x + y;
        }

        double sub(double x, double y)
        {
            return x - y;
        }
    }
}

using namespace global;
int main(void)
{
    int x, y;
    double a, b;

    cout << "Appel de lafonction add de namespace entier pour les deux entier: ";
    cin >> x >> y;
    cout << global::entier::add(x, y) << endl;
    cout << "Appel de la fonction sub de namespace reel pour les deux entier reels: ";
    cin >> a >> b;
    cout << global::reel::sub(a, b) << endl;


    return 0;
}
