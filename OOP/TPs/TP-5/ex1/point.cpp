#include "point.h"

void point::set_x(int x)
{
	cord_x = x;
}

void point::set_y(int y)
{
	cord_y = y;
}

int point::get_x()
{
	return cord_x;
}

int point::get_y()
{
	return cord_y;
}

void point::deplacer(const int &dx, const int &dy)
{
	cord_x += dx;
	cord_y += dy;
}

void point::afficher(const int x, const int y) const
{
	x = cord_x;
	y = cord_y;
	cout << "point(" << x << ", " << y << ")" << endl;
}
void point::homothetie(int value)
{
	cord_x *= value;
	cord_y *= value;
}
void point::rotation(int angle)
{
	int x, y;

	x = cord_x;
	y = cord_y;
	cord_x = x * cos(angle) - y * sin(angle);
	cord_y = x * cos(angle) - y * sin(angle);
}

float point::rho()
{
	float rho;

	rho = sqrt((cord_x*cord_x) + (cord_y * cord_y));
	return rho;
}

float point::theta()
{
	float theta;

	theta = atan2(cord_y, cord_x);
	return theta;
}

void point::afficherPol(float rho, float theta) const
{
	cout << "Polar Cordinates: (" << rho() << ", " << theta() << ")\n";
}

