#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, k, s;
	cout << "¬ведите N(<20): \n";
	cin >> N;
	cout << "¬ведите k(<80): \n";
	cin >> k;
	s = N + k;
	switch (s%10)
	{
	case 1 :cout << s << " рубль"; break;
	case 2 :cout << s << " рубл€"; break;
	case 3 :cout << s << " рубл€"; break;
	case 4 :cout << s << " рубл€"; break;
	default :cout << s << " рублей"; break;
	}
	_getch();
	return 0;
}