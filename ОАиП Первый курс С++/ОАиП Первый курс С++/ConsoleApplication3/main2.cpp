#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
using namespace std;
long long fact(int n)
{
	if (n = 0) return 1;
	else return n * fact(n - 1);
}
#pragma region
void zad1();
void zad2();
void zad3();
void ind1();
void ind2();
void ind3();
void dop1();
void dop2();
void dop3();
void dop4();
void dop5();
void dop6();
void dop7();
void dop8();
void dop9();
void dop10();
void dop11();
void dop12();
void dop13();
void dop14();
void dop15();
void end();
int main_menu();
#pragma endregion
int main()
{
	setlocale(LC_ALL, "Russian");

	int menuResult = 1;
	while (menuResult != 22)
		menuResult = main_menu();
}
int main_menu()
{
	int choice;
	system("cls");
	cout << "    Лабораторная работа №3\n";
	cout << " \nОбщие задания:\n";
	cout << "\n1. Задание 1.\n";
	cout << "2. Задание 2.\n";
	cout << "3. Задание 3.\n";
	cout << " \nИндивидуальные задания:\n";
	cout << "\n4. Задание 1.\n";
	cout << "5. Задание 2.\n";
	cout << "6. Задание 3.\n";
	cout << " \nДополнитеьные задания:\n";
	cout << "\n7. Задание 1.\n";
	cout << "8. Задание 2.\n";
	cout << "9. Задание 3.\n";
	cout << "10. Задание 4.\n";
	cout << "11. Задание 5.\n";
	cout << "12. Задание 6.\n";
	cout << "13. Задание 7.\n";
	cout << "14. Задание 8.\n";
	cout << "15. Задание 9.\n";
	cout << "16. Задание 10.\n";
	cout << "17. Задание 11.\n";
	cout << " \nДополнитеьные задания*:\n";
	cout << "\n18. Задание 1.\n";
	cout << "19. Задание 2.\n";
	cout << "20. Задание 3.\n";
	cout << "21. Задание 4.\n";
	cout << "\n22. Выход\n";
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
		zad3();
		break;
	case 4:
		ind1();
		break;
	case 5:
		ind2();
		break;
	case 6:
		ind3();
		break;
	case 7:
		dop1();
		break;
	case 8:
		dop2();
		break;
	case 9:
		dop3();
		break;
	case 10:
		dop4();
		break;
	case 11:
		dop5();
		break;
	case 12:
		dop6();
		break;
	case 13:
		dop7();
		break;
	case 14:
		dop8();
		break;
	case 15:
		dop9();
		break;
	case 16:
		dop10();
		break;
	case 17:
		dop11();
		break;
	case 18:
		dop12();
		break;
	case 19:
		dop13();
		break;
	case 20:
		dop14();
		break;
	case 21:
		dop15();
		break;
	case 22:
		end();
		break;
	default:
		choice = 0;
		break;
		}
	return choice;
}
void zad1()
{
	system("cls");
	double N,a,b;
	int i;
	N = 0;
	i = 1;
		while (i <= 30)
		{
			if (i % 2 == 1) 
			{
				a = i; 
				b = pow(i, 2);
			}
			else
			{
				a = i / 2;
				b = pow(i, 3);
			}
			N += pow((a - b), 2);
				i++;
		}
	cout << "     N= " << N;
	_getch();
}
void zad2()
{
	system("cls");
	int n;
	double d = 0, S = 0, e = 0.001;
	n = 1;
	do
	{
		d = 1 / pow(2, n) + 1 / pow(3, n);
		S += d;
		n++;
	} while (d >= e);
	cout << "S = " << S;
	_getch();
}
void zad3()
{
	system("cls");
	int A = 0, M = 20, i;
	double PI = 3.14159265358979323846;
	double X, y, B=PI/2, H;
	H = (B - A) / M;
	for (i = 0; (A + i * H) <= B; i++)
	{
		X = A + i * H;
		y = sin(X) - cos(X);
		cout << "X = " << X << "\t " << "  y = " << y << "\n ";
	}
		_getch();
}
void ind1()
{
	system("cls");
	double n, m, x, y, s;
    cout << "Введите количество членов ряда n : ";
	cin >> n;
	cout << "Введите количество аргументов функции m : ";
	cin >> m;
	x = 0.1;
	while (x <= 1);
	{
		y = sin(s);
		s=
		x += 1 / m;
	}
	_getch();
}
void ind2()
{
	system("cls");
	double M, h, a = 0, b = 1, n, x;
	cout << "Введите количество частей M : ";
	cin >> M;
	h = (b - a) / M;
	cout << "Шаг h = " << h << endl;
	double y = sin(x)+cos(x)-2*atan(x);
	for (x = a; x <= b; x += h)
	{
		n = sin(x) + cos(x) - 2 * atan(x);
		y = fminl(y, abs(n));
	}
	cout << "Корень уравнения : " << y;
	_getch();
}
void ind3()
{
	system("cls");
	double a=1.0, b=1.5, h=0.1, x, y;
	cout << "a=" << a << "\t ";
	cout << "b=" << b << "\t ";
	cout << "h=" << h << "\t \n";
	cout << "\nФункция f(x) = ln(x)\n";
	for (a; a <= b; a += h)
	{
		x = a;
		y = log(x);
		cout << "\nx = " << x << "\t " << "f(x) = " << y ;
	}
	_getch();
}
void dop1()
{
	system("cls");
	int a, b, c, z, s1, s2;
	for (c = 2; c <= 9; c++)
	{
		cout << "Двухзначные числа, сумма цифр не изменяется при умножении на число " << c << ":";
		for (z = 10; z <= 99; z++)
		{
			a = z;
			b = z * c;
			s1 = s2 = 0;
			while (a > 0 && b > 0)
			{
				s1 += a % 10;
				a /= 10;
				s2 += b % 10;
				b /= 10;
			}
			if (s1 == s2) cout << z << " ";
		}
		cout << "\n";
	}
	_getch();
}
void dop2()
{
	system("cls");
	int z,x,s1,n;
	cout << "Введите число n равное сумме цифр трехзначного числа : ";
	cin >> n;
	cout << "Трёхзначные числа : "<<"\n";
	for (z = 100; z <= 999; z++)
	{
		x = z;
		s1 = 0;
		while (x > 0)
		{
			s1 += x % 10;
		    x /= 10;
		}
		if (s1 == n) cout << z << " ";
	}
	cout << "\n";
	_getch();
}
void dop3()
{
	system("cls");
	int z, x;
	cout << "Трёхзначные числа, средняя цифра которых равна сумме первой и третьей цифр : \n";
	for (z = 100; z <= 999; z++)
	{
		x = (z % 100) / 10;
		if ((z % 10) + (z / 100) == x) cout << z << " ";
	}
	cout << "\n";
	_getch();
}
void dop4()
{
	system("cls");
	int z, x,a,b;
	cout << "Трехзначные числа, которые можно представить разностью между квадратом числа,\n"<<"образованного первыми двумя цифрами и квадратом третьей цифры : \n";
	for (z = 100; z <= 999; z++)
	{
		x = z;
		a = pow((z / 10), 2);
		b = pow((z % 10), 2);
		if (a-b == x) cout << z << " ";
	}
	cout << "\n";
	_getch();
}
void dop5()
{
	system("cls");
	int a,b,z, x;
	cout << "Двузначные числа, сумма квадратов цифр которых делится на 17 : \n";
	for (z = 10; z <= 99; z++)
	{
		a = pow((z / 10), 2);
		b = pow((z % 10), 2);
		if ((a+b)%17 == 0) cout << z << " ";
	}
	cout << "\n";
	_getch();
}
void dop6()
{
	system("cls");
	int c, a, b, k, z;
	int f[10];
	cout << "Найти все трехзначные числа, представимые в виде сумм факториалов своих цифр : ";
	f[0] = 1;
	for (c = 1; c <= 9; c++)
		f[c] = f[c - 1] * c;
	for (z = 100; z <= 999; z++)
	{
		a = z / 100;
		b = z % 10;
		k = (z % 100) / 10;
		if (f[a] + f[b] + f[k] == z) cout << z << " ";
	}
	cout << "\n";
	_getch();
}
void dop7()
{
	system("cls");
	int a, b, z, x;
	cout << "Двузначные число, обладающее тем свойством, что куб суммы его цифр равен квадрату самого числа : ";
	for (z = 10; z <= 99; z++)
	{
		a = pow(((z / 10)+ (z % 10)), 3);
		b = pow(z, 2);
		if (a == b) cout << z << " ";
	}
	cout << "\n";
	_getch();
}
void dop8()
{
	system("cls");
	int a, b, z, x;
	cout << "Двузначное число, равное утроенному произведению его цифр : ";
	for (z = 10; z <= 99; z++)
	{
		a = z/10;
		b = z%10;
		x = 3 * (a + b);
		if (x == z) cout << z << " ";
	}
	cout << "\n";
	_getch();
}
void dop9()
{
	system("cls");
	int a, b, z, x, y;
	cout << "Двузначные числа, где удвоенная сумма цифр равна их произведению : ";
	for (z = 10; z <= 99; z++)
	{
		a = z / 10;
		b = z % 10;
		x = 2 * (a + b);
		y = a*b;
		if (x == y) cout << z << " ";
	}
	cout << "\n";
	_getch();
}
void dop10()
{
	system("cls");
	int j, x, y, M, S;
	cout << "Введите M : ";
	cin >> M;
	S = sqrt(M);
	for (j = 1; j <= S; j++)
	{
		x = M - j * j;
		y = sqrt(x);
		if (j * j + y * y == M)
		{
			cout << M << " = " << j << "^2 + " << y << "^2";
		}
	}
	_getch();
}
void dop11()
{
	system("cls");
	int j, N, M;
	double pr;
	cout << "Введите начальную сумму вклада : ";
	cin >> M;
	cout << "Введите количество месяцев : ";
	cin >> N;
	cout << "Введите проценты вклада : ";
	cin >> pr;
	pr /= 100;
	for (j = 1; j <= N; j++)
		M += pr * M;
	cout << "Конечная сумма вклада : " << M;
	_getch();
}
void dop12()
{
	system("cls");
	int j, x, y, S, N;
	cout << "Введите число N : ";
	cin >> N;
	y = sqrt(N);
	S = 1;
	for (j = 2; j <= y; j++)
		if (N % j == 0)
		{
			S += j;
			S += N / j;
		}
	if (y * y == N) S -= y;
	if (S == N) cout << "Yes";
	else cout << "No";
	_getch();
}
void dop13()
{
	system("cls");
	long long l = 9, j = 1, tecl = 0, n = 1, k;
	cout << "Введите k : ";
	cin >> k;
	while (tecl + j * l < k)
	{
		tecl += j * l;
		j++;
		l *= 10;
		n *= 10;
	}
	if (tecl + j < k) tecl += j;
	while (tecl + j < k)
	{
		n++;
		tecl += j;
	}
	n++;
	long long nom = tecl + j;
	while (nom > k)
	{
		n /= 10;
		nom--;
	}
	cout << "k-я цифра последовательности = " << n % 10;
	_getch();
}
void dop14()
{
	system("cls");
	long long n = 1, tecl = 0, k, m, l;
	cout << "Введите k : ";
	cin >> k;
	while (tecl < k)
	{
		m = pow(n, 2);
		l = 0;
		while (m > 0)
		{
			l++;
			m /= 10;
		}
		if (tecl + l >= k) break;
		tecl += l;
		n++;
	}
	int nom = tecl + l;
	m = pow(n, 2);
	while (nom > k)
	{
		nom--;
		m /= 10;
	}
	cout << "k-я цифра последовательности = " << m % 10;
	_getch();
}
void dop15()
{
	system("cls");
	long long n = 0, tecl = 2, k, m, l, n1 = 1, n2 = 1;
	cout << "Введите k : ";
	cin >> k;
	if (k < 3)
	{
		cout << "k-я цифра последовательности = 1"; return;
	}
	while (tecl < k)
	{
		n = n1 + n2;
		m = n;
		l = 0;
		while (m > 0)
		{
			l++;
			m /= 10;
		}
		if (tecl + l >= k) break;
		tecl += l;
		n2 = n1;
		n1 = n;
	}
	int nom = tecl + l;
	m = n1 + n2;
	while (nom > k)
	{
		nom--;
		m /= 10;
	}
	cout << "k-я цифра последовательности = " << m % 10;
	_getch();
}
void end()
{
	system("cls");
	cout<<"Нажмите любую клавишу для завершения работы...";
	_getch();
}