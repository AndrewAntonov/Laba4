#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, t1, t2, x1, x2, x3, x4, D;
	cout<<"������� �������� a,b,c ��� ������� ��������� ax^4+bx^2+c=0\n";
	cout << "������� ����� a:";
	cin >> a;
	cout << "������� ����� b:";
	cin >> b;
	cout << "������� ����� c:";
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
			cout << "������ ������ ����� " << x1;
			cout << "\n������ ������ ����� " << x2;
			cout << "\n������ ������ ����� " << x3;
			cout << "\n��������� ������ ����� " << x4;
		}
		if (D == 0)
		{
			t1 = (-b + sqrt(D)) / (2 * a);
			x1 = sqrt(t1);
			x2 = -sqrt(t1);
			cout << "������ ������ ����� " << x1;
			cout << "\n������ ������ ����� " << x2;
		}
		if (D < 0)
			cout << "��� ������";
	}
	if ((a == 0) || (b == 0))
		cout << "��� ������";
	_getch();
	return 0;
}