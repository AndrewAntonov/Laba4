#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int G, N, L;
	cout << "¬ведите год рождени€: \n";
	cin >> G;
	cout << "¬ведите сегодн€шний год: \n";
	cin >> N;
	L = N -G;
	switch (L % 10)
	{
	case 1:cout << L << " год"; break;
	case 2:cout << L << " года"; break;
	case 3:cout << L << " года"; break;
	case 4:cout << L << " года"; break;
	default:cout << L << " лет"; break;
	}
	_getch();
	return 0;
}