#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "\n������� ������ �����: ";
	cin >> b;
	int y = a >= b ? a : b;
	cout << "\n���������� �����:" << y;
	_getch();
	return 0;
}