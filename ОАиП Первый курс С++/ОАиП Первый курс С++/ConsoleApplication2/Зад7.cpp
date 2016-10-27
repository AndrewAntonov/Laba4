#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, t1, t2, x1, x2, x3, x4, D;
	cout<<"Введите значения a,b,c для решения уравнения ax^4+bx^2+c=0\n";
	cout << "Введите число a:";
	cin >> a;
	cout << "Введите число b:";
	cin >> b;
	cout << "Введите число c:";
	cin >> c;
	D = pow(b, 2) - 4 * a*c;
	if ((a != 0) && (b != 0))
	{
		if (D > 0)
		{
			t1 = (-b + sqrt(D)) / (2 * a);
			t2 = (-b - sqrt(D)) / (2 * a);
			x1 = sqrt(t1);
			x2 = -sqrt(t1);
			x3 = sqrt(t2);
			x4 = -sqrt(t2);
			cout << "Первый корень равен " << x1;
			cout << "\nВторой корень равен " << x2;
			cout << "\nТретий корень равен " << x3;
			cout << "\nЧетвертый корень равен " << x4;
		}
		if (D == 0)
		{
			t1 = (-b + sqrt(D)) / (2 * a);
			x1 = sqrt(t1);
			x2 = -sqrt(t1);
			cout << "Первый корень равен " << x1;
			cout << "\nВторой корень равен " << x2;
		}
		if (D < 0)
			cout << "Нет корней";
	}
	if ((a == 0) || (b == 0))
		cout << "Нет корней";
	_getch();
	return 0;
}