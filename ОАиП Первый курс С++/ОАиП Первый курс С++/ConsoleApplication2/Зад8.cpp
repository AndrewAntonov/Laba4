#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, k, s;
	cout << "������� N(<20): \n";
	cin >> N;
	cout << "������� k(<80): \n";
	cin >> k;
	s = N + k;
	switch (s%10)
	{
	case 1 :cout << s << " �����"; break;
	case 2 :cout << s << " �����"; break;
	case 3 :cout << s << " �����"; break;
	case 4 :cout << s << " �����"; break;
	default :cout << s << " ������"; break;
	}
	_getch();
	return 0;
}