#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "\nВведите второе число: ";
	cin >> b;
	int y = a >= b ? a : b;
	cout << "\nНаибольшее число:" << y;
	_getch();
	return 0;
}