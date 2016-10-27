#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c,  Y;
	int N;
	cout << "¬ведите число a:\n";
	cin >> a;
	cout << "¬ведите число b:\n";
	cin >> b;
	cout << "¬ведите число c:\n";
	cin >> c;
	cout << "¬ведите число N:\n";
	cin >> N;
	switch (N)
	{
	case 2:Y = b*c - pow(a, 2); break;
	case 56:Y = b*c; break;
	case 7:Y = pow(a, 2) + c; break;
	case 3:Y = a - b*c; break;
	default:Y = pow(a + b, 3); break;
	}
	cout << "\nY=" << Y;
	_getch();
	return 0;
}