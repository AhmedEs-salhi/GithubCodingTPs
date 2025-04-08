#include "point.h"

int main()
{
	point p(3, 4);

	p.homothetie(2.0);
	p.rotation(M_PI / 4);
	p.afficherPol();

	return 0;
}
