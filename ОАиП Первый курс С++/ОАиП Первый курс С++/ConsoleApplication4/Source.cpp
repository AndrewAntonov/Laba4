#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
#pragma region
void zad1();
void zad2();
void dop1();
void dop2();
void dop3();
void dop4();
void dop5();
void dop6();
void end();
int main_menu();
#pragma endregion
int main()
{
	setlocale(LC_ALL, "Russian");

	int menuResult = 1;
	while (menuResult != 9)
		menuResult = main_menu();
}
int main_menu()
{
	int choice;
	system("cls");
	cout << "    Лабораторная работа №4\n";
	cout << " \nОбщие задания:\n";
	cout << "\n1. Задание 1.\n";
	cout << "2. Задание 2.\n";
	cout << " \nДополнитеьные задания:\n";
	cout << "\n3. Задание 1.\n";
	cout << "4. Задание 2.\n";
	cout << "5. Задание 3.\n";
	cout << "6. Задание 4.\n";
	cout << " \nДополнитеьные задания*:\n";
	cout << "\n7. Задание 1.\n";
	cout << "8. Задание 2.\n";
	cout << "\n9. Выход\n";
	cout << "\nВыберите пункт меню: ";
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		zad1();
		break;
	case 2:
		zad2();
		break;
	case 3:
		dop1();
		break;
	case 4:
		dop2();
		break;
	case 5:
		dop3();
		break;
	case 6:
		dop4();
		break;
	case 7:
		dop5();
		break;
	case 8:
		dop6();
		break;
	case 9:
		end();
		break;
	default:
		choice = 0;
		break;
	}
	return choice;
}
int gcd(int u, int v)
{
	if (u == v)
		return u;
	if (u == 0)
		return v;
	if (v == 0)
		return u;
	if (~u & 1)
	{
		if (v & 1)
			return gcd(u >> 1, v);
		else
			return gcd(u >> 1, v >> 1) << 1;
	}

	if (~v & 1)
		return gcd(u, v >> 1);

	if (u > v)
		return gcd((u - v) >> 1, v);

	return gcd((v - u) >> 1, u);
}
void zad1() 
{
	system("cls");
	int sem;
	cout << "Введите число" << endl;
	cout << "в семиричной системе счисления ";
	cin >> sem;
	int n = 0, x = sem, p = 0;
	while (x > 0)
	{
		p = x % 10;
		n++;
		x /= 10;
	}
	int des = 0, i;
	for (i = 0; n>i; i++)
	{
		des += ((sem % 10)*pow(7, i));
		sem /= 10;
	}
	cout << "в десятичной системе счисления " << des << endl;
	string d ;
	int j, k;
	for (j = 0; des > 0; j++)
	{
		k = des % 12;
		char c;
		if (k > 9)
			c = 'A' + k - 10;
		else
			c = '0' + k;
		d += c;
		des /= 12;
	}
	string d1 = d;
	reverse(d1.begin(), d1.end());
	cout << "в двенадцатеричной системе счисления ";
	cout << d1;
	_getch();
}
void zad2() 
{
	system("cls");
	int a;
	cout << "Введите число ";
	cin >> a;
	cout << "Делится ли число " << a << " на 3?\t";
	_getch();
	if (gcd(a, 3) == 1)
		cout << "Нет" << endl;
	else
		cout << "Да" << endl;
	_getch();
	cout << "Делится ли число " << a << " на 37?\t";
	_getch();
	if (gcd(a, 37) == 1)
		cout << "Нет" << endl;
	else
		cout << "Да" << endl;
	_getch();
	cout << "Делится ли число " << a << " на 89?\t";
	_getch();
    if (gcd(a, 89) == 1)
		cout << "Нет" << endl;
	else
		cout << "Да" << endl;

	_getch();
}
void dop1() 
{
	system("cls");
	cout << "\n\ta)семиразрядные числа из системы с основанием 6," << endl;
	cout << "\tб)двуразрядные числа из системы с основанием 16," << endl;
	cout << "\tв)пятиразрядные числа из системы с основанием 2.\n" << endl;
	int o, r, i;
	cout << "Введите кол-во разрядов: ";
	cin >> r;
	cout << "Введите основание системы счисления: ";
	cin >> o;
	if(o==6||o==16)
	    cout << "Минимальное число "<<o<<"-ти разрядной системы счисления: ";
	else
		cout << "Минимальное число " << o << "-ух разрядной системы счисления: ";
	cout << "1";
	for (i = 0; r - 1 > i; i++)
		cout << "0";
	cout << endl;
	if (o == 6 || o == 16)
		cout << "Максимальное число " << o << "-ти разрядной системы счисления: ";
	else
		cout << "Максимальное число " << o << "-ух разрядной системы счисления: ";
	char k;
	if (o > 10)
		k = 'A' + o - 11;
	else
		k = '0' + o - 1;
	for(i=0;r>i;i++)
		cout << k;
	_getch();
}
void dop2() 
{
	system("cls");
	string a;
	int o,q;
	cout << "\tМожет ли данное число существовать в указанной системе счисления:" << endl;
	cout << "\ta)701 " << "  б)158 " << "   в)46200 - в восьмеричной системе счисления\n";
	cout << "\ta)14205 " << "б)100023 " << "в)4390 - в пятеричной системе счисления\n";
	cout << "\ta)1A2C " << " б)96480" << "  в)AEC0 - в шестнадцатеричной системе счисления\n";
	cout << "Введите основание системы счисления: ";
	cin >> o;
	cout << "Введите число: ";
	cin >> a;
	_getch();
}
void dop3() {
}
void dop4() {
} 
void dop5() {
}
void dop6() {
}
void end()
{
	system("cls");
	cout << "Нажмите любую клавишу для завершения работы...";
	_getch();
}