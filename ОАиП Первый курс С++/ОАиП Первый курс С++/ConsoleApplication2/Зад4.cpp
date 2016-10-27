#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, m, k, L;
	cout << "¬ведите число x1:\n";
	cin >> x1;
	cout << "¬ведите число x2:\n";
	cin >> x2;
	cout << "¬ведите число m:\n";
	cin >> m;
	k = pow(cos(pow(x1, 2)), 3) + pow(sin(pow(x2, 3)), 2);
	if (k >=1 ) L = pow(k, 2) - exp(m);
	else L = pow(k, 3) + pow(m, 0.2);
	cout<<"\nL="<<L;
	_getch();
	return 0;
}