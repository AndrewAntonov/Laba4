#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double d, a, b;
	char z;
	cout << "������� ����� ��������� (A � B) �� ������ ��������\n";
	cin >> a >> z >> b;
	if (z == '+') d = a + b;
	else
	if (z == '-') d = a - b;
	else
    if (z == '*') d = a * b;
	else
	if (z == '/' && b != 0) d = a / b;
	else cout << "������������ ����.��� ���������� ����� ������� y" << "\n";
	char y = _getch();
	if (y == 'y')
		main();
	else
	cout <<"d="<<d;
	_getch();
	return 0;
}