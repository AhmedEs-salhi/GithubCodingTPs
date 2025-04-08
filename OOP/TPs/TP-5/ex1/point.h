#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>
using namespace std;

class point {
	private:
		int cord_x, cord_y;
	public:
		void deplacer(const int &, const int &);
		void afficher(const int, const int) const;
		void homothetie(int);
		void rotation(int);
		float rho();
		float theta();
		void afficherPol(float rho, float theta) const;
		void set_x(int);
		void set_y(int);
		int get_x();
		int get_y();
};

#endif
