#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, z, y, f, x;
	string F;

	int choose;
    cout << "Введите a:";
    cin >> a;
    cout << "\nВыбор функции: f(x): 1 - (2*x), 2 - (x^2), 3 - (x/3) :";
    cin >> choose;
    cout << "\nВведите z:";
    cin >> z;
    if (z < 1)
        x = z*z;
    else
        x = z+1;
    switch (choose) 
	{
	case 1: f = 2 * x; F = "2 * x"; break;
	case 2: f = x*x; F = "x*x"; break;
	case 3: f = x / 3; F = "x / 3"; break;
    default: break;
    }
    y = (a*log(1+pow(x,0.2))) + (pow(cos(f+1),2));
    cout << "\na = " << a << " \nz = " << z << "\nf(x) = " << F << "\nx = " << x;
    cout << "\ny = " << y;
	_getch();
    return 0;
}