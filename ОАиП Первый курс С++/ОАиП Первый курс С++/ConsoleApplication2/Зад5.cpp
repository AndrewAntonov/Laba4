#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a,b,c,d,Z;
	cout << "������� ����� a:\n";
	cin >> a;
	cout << "������� ����� b:\n";
	cin >> b;
	cout << "������� ����� c:\n";
	cin >> c;
	cout << "������� ����� d:\n";
	cin >> d;
	if (c >= d&&a < d) Z = a + b / c;
	else if (c < d&&a >= d) Z = a - b / c;
	else Z = 0;
	cout << "\nZ=" << Z;
	_getch();
	return 0;
}