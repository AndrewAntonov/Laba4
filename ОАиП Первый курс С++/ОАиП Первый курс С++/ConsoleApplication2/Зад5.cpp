#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a,b,c,d,Z;
	cout << "¬ведите число a:\n";
	cin >> a;
	cout << "¬ведите число b:\n";
	cin >> b;
	cout << "¬ведите число c:\n";
	cin >> c;
	cout << "¬ведите число d:\n";
	cin >> d;
	if (c >= d&&a < d) Z = a + b / c;
	else if (c < d&&a >= d) Z = a - b / c;
	else Z = 0;
	cout << "\nZ=" << Z;
	_getch();
	return 0;
}