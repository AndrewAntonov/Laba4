#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int G, N, L;
	cout << "������� ��� ��������: \n";
	cin >> G;
	cout << "������� ����������� ���: \n";
	cin >> N;
	L = N -G;
	switch (L % 10)
	{
	case 1:cout << L << " ���"; break;
	case 2:cout << L << " ����"; break;
	case 3:cout << L << " ����"; break;
	case 4:cout << L << " ����"; break;
	default:cout << L << " ���"; break;
	}
	_getch();
	return 0;
}