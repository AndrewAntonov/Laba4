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
	cout << "    ������������ ������ �4\n";
	cout << " \n����� �������:\n";
	cout << "\n1. ������� 1.\n";
	cout << "2. ������� 2.\n";
	cout << " \n������������� �������:\n";
	cout << "\n3. ������� 1.\n";
	cout << "4. ������� 2.\n";
	cout << "5. ������� 3.\n";
	cout << "6. ������� 4.\n";
	cout << " \n������������� �������*:\n";
	cout << "\n7. ������� 1.\n";
	cout << "8. ������� 2.\n";
	cout << "\n9. �����\n";
	cout << "\n�������� ����� ����: ";
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
	cout << "������� �����" << endl;
	cout << "� ���������� ������� ��������� ";
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
	cout << "� ���������� ������� ��������� " << des << endl;
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
	cout << "� ���������������� ������� ��������� ";
	cout << d1;
	_getch();
}
void zad2() 
{
	system("cls");
	int a;
	cout << "������� ����� ";
	cin >> a;
	cout << "������� �� ����� " << a << " �� 3?\t";
	_getch();
	if (gcd(a, 3) == 1)
		cout << "���" << endl;
	else
		cout << "��" << endl;
	_getch();
	cout << "������� �� ����� " << a << " �� 37?\t";
	_getch();
	if (gcd(a, 37) == 1)
		cout << "���" << endl;
	else
		cout << "��" << endl;
	_getch();
	cout << "������� �� ����� " << a << " �� 89?\t";
	_getch();
    if (gcd(a, 89) == 1)
		cout << "���" << endl;
	else
		cout << "��" << endl;

	_getch();
}
void dop1() 
{
	system("cls");
	cout << "\n\ta)������������� ����� �� ������� � ���������� 6," << endl;
	cout << "\t�)������������ ����� �� ������� � ���������� 16," << endl;
	cout << "\t�)������������� ����� �� ������� � ���������� 2.\n" << endl;
	int o, r, i;
	cout << "������� ���-�� ��������: ";
	cin >> r;
	cout << "������� ��������� ������� ���������: ";
	cin >> o;
	if(o==6||o==16)
	    cout << "����������� ����� "<<o<<"-�� ��������� ������� ���������: ";
	else
		cout << "����������� ����� " << o << "-�� ��������� ������� ���������: ";
	cout << "1";
	for (i = 0; r - 1 > i; i++)
		cout << "0";
	cout << endl;
	if (o == 6 || o == 16)
		cout << "������������ ����� " << o << "-�� ��������� ������� ���������: ";
	else
		cout << "������������ ����� " << o << "-�� ��������� ������� ���������: ";
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
	cout << "\t����� �� ������ ����� ������������ � ��������� ������� ���������:" << endl;
	cout << "\ta)701 " << "  �)158 " << "   �)46200 - � ������������ ������� ���������\n";
	cout << "\ta)14205 " << "�)100023 " << "�)4390 - � ���������� ������� ���������\n";
	cout << "\ta)1A2C " << " �)96480" << "  �)AEC0 - � ����������������� ������� ���������\n";
	cout << "������� ��������� ������� ���������: ";
	cin >> o;
	cout << "������� �����: ";
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
	cout << "������� ����� ������� ��� ���������� ������...";
	_getch();
}