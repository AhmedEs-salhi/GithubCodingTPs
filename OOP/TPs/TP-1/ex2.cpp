#include <iostream>
using namespace std;

int estPremier(int num) 
{
	int i, cpt;

	cpt = 0;
	
	if (num == 1)
		return 0;
	
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			cpt++;
	}
	if (cpt == 2)
		return 1;
	
	return 0;
}	

int nbrDesNbrPremier(int num)
{
	int nbrDesNbrPremier;
	int i;

	nbrDesNbrPremier = 0;
	for (i = 1; i < num; i++)
	{
		if (estPremier(i) == 1)
			nbrDesNbrPremier++;
	}
	return nbrDesNbrPremier;
}

int main(void)
{
	int num, result;
	
	::cout << "Entrer votre nombre: ";
	::cin >> num;
	result = nbrDesNbrPremier(num);
	::cout << "Il exist " << result << 
	" nombre premier avant " << num << endl;

	return 0;
}
