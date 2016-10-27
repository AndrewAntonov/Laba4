#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double d, a, b;
	char z;
	cout << "Введите любое выражение (A и B) со знаком операции\n";
	cin >> a >> z >> b;
	if (z == '+') d = a + b;
	else
	if (z == '-') d = a - b;
	else
    if (z == '*') d = a * b;
	else
	if (z == '/' && b != 0) d = a / b;
	else cout << "Неправильный ввод.Для повторного ввода нажмите y" << "\n";
	char y = _getch();
	if (y == 'y')
		main();
	else
	cout <<"d="<<d;
	_getch();
	return 0;
}