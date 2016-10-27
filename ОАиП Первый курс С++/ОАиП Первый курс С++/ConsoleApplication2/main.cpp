#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
using namespace std;
#pragma region
void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();
void zad9();
void ind1();
void ind2();
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
void dop16();
void end();
int main_menu();
#pragma endregion
int main()
{
	setlocale(LC_ALL, "Russian");

	int menuResult = 1;
	while (menuResult != 28)
		menuResult = main_menu();
}
int main_menu()
{
	int choice;
	system("cls");
	cout << "    Лабораторная работа №2\n";
	cout << " \nОбщие задания:\n";
	cout << "\n1. Задание 1.\n";
	cout << "2. Задание 2.\n";
	cout << "3. Задание 3.\n";
	cout << "4. Задание 4.\n";
	cout << "5. Задание 5.\n";
	cout << "6. Задание 6.\n";
	cout << "7. Задание 7.\n";
	cout << "8. Задание 8.\n";
	cout << "9. Задание 9.\n";
	cout << " \nИндивидуальные задания:\n";
	cout << "\n10. Задание 1.\n";
	cout << "11. Задание 2.\n";
	cout << " \nДополнитеьные задания:\n";
	cout << "\n12. Задание 1.\n";
	cout << "13. Задание 2.\n";
	cout << "14. Задание 3.\n";
	cout << "15. Задание 4.\n";
	cout << "16. Задание 5.\n";
	cout << " \nДополнитеьные задания*:\n";
	cout << "\n17. Задание 1.\n";
	cout << "18. Задание 2.\n";
	cout << "19. Задание 3.\n";
	cout << "20. Задание 4.\n";
	cout << "21. Задание 5.\n";
	cout << "22. Задание 6.\n";
	cout << "23. Задание 7.\n";
	cout << " \nДополнитеьные задания**:\n";
	cout << "\n24. Задание 1.\n";
	cout << "25. Задание 2.\n";
	cout << "26. Задание 3.\n";
	cout << "27. Задание 4.\n";
	cout << "\n28. Выход\n";
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
		zad4();
		break;
	case 5:
		zad5();
		break;
	case 6:
		zad6();
		break;
	case 7:
		zad7();
		break;
	case 8:
		zad8();
		break;
	case 9:
		zad9();
		break;
	case 10:
		ind1();
		break;
	case 11:
		ind2();
		break;
	case 12:
		dop1();
		break;
	case 13:
		dop2();
		break;
	case 14:
		dop3();
		break;
	case 15:
		dop4();
		break;
	case 16:
		dop5();
		break;
	case 17:
		dop6();
		break;
	case 18:
		dop7();
		break;
	case 19:
		dop8();
		break;
	case 20:
		dop9();
		break;
	case 21:
		dop10();
		break;
	case 22:
		dop11();
		break;
	case 23:
		dop12();
		break;
	case 24:
		dop13();
		break;
	case 25:
		dop14();
		break;
	case 26:
		dop15();
		break;
	case 27:
		dop16();
		break;
	case 28:
		end();
		break;
	default:
		choice = 0;
		break;
	}
	return choice;
}
void zad1()
{}
void zad2()
{}
void zad3()
{}
void zad4()
{}
void zad5()
{}
void zad6()
{}
void zad7()
{}
void zad8()
{}
void zad9()
{}
void ind1()
{}
void ind2()
{}
void dop1()
{
	system("cls");
	int k, M;
	double y;
	cout << "Введите четырехзначное число k ";
	cin >> k;
	M = (k / 1000) + (k % 10);
	switch (M)
	{
	case 3:
	case 5: { y = pow(tan(k), 2) + (pow(sin(k), 2) / 2.7); break; }
	case 7:
	case 8:
	case 9: { y = log(abs(k - 6)); break; }
	case 10: { y = exp(0.2 * k); break; }
	default: { y = k * sin(pow(k, 2)); break; }
	}
	cout << "\ny = " << y;
	_getch();
}
void dop2()
{
	system("cls");
	double R, z;
	int k;
	cout << "Введите R : ";
	cin >> R;
	k = int(R * sin(3 * R));
	switch (k % 5)
	{
	case 0: { z = R + sin(R / 3); break; }
	case 1: { z = tan(R + 2); break; }
	case 2:
	case 4: { z = exp(R - 1) + atan(R); break; }
	default: { z = log(R + 5) / 3.7; break; }
	}
	cout << "\nz = " << z ;
	_getch();
}
void dop3()
{
	system("cls");
	double x, y, z;
	cout << "Введите x  ";
	cin >> x;
	cout << "Введите y  ";
	cin >> y;
	cout << "Введите z  ";
	cin >> z;
	if (x + y <= z) cout << "\nтреугольник не существует";
    else 
		if (x + z <= y) cout << "\nтреугольник не существует";
        else 
			if (y + z <= x) cout << "\nтреугольник не существует";
	        else cout << "\nтреугольник существует";
	_getch();
}
void dop4()
{
	system("cls");
	double a, y;
	cout << "Введите a  ";
	cin >> a;
	if (a < -1) y = 1 / a;
	else 
		if (a > -1 && a < 2) y = pow(a, 2);
        else y = 4;
		cout << "\nf(a) = " << y;
		_getch();
}
void dop5()
{
	system("cls");
	double x, y, u;
	cout << "Введите x  ";
	cin >> x;
	y = 1 - pow(x, 2);
	if (pow(x, 2) + pow((y - 2), 2) == 4) u = x - y;
	else u = x * y + 7;
	cout << "\nu = " << u;
	_getch();
}
void dop6()
{
	system("cls");
	double x, y, z;
	cout << "Введите x ";
	cin >> x;
	cout << "\nВведите y ";
	cin >> y;
	cout << "\nВведите z ";
	cin >> z;
	cout << "\nЧисла принадлежат интервалу (1 , 3) : ";
	if (x > 1 && x < 3) cout << " " << x;
	if (y > 1 && y < 3) cout << " " << y;
	if (z > 1 && z < 3) cout << " " << z;
	_getch();
}
void dop7()
{
	system("cls");
	double x, y;
	cout << "Введите x ";
	cin >> x;
	cout << "\nВведите y ";
	cin >> y;
	if (x < 0 && y < 0) { x = abs(x); y = abs(y); }
	else
		if (x * y < 0) { x += 0.5; y += 0.5; }
		else
			if (x * y > 0 && x < 0.5 && x > 2 && y < 0.5 && y > 2) { x /= 10; y /= 10; }
	cout << "\nx = " << x;
	cout << "\ny = " << y;
	_getch();
}
void dop8()
{
	system("cls");
	double x, y;
	cout << "Введите x ";
	cin >> x;
	cout << "\nВведите y ";
	cin >> y;
	if (x > 0 && y > 0) cout << "\nТочка лежит в первом квадранте";
	if (x < 0 && y > 0) cout << "\nТочка лежит во втором квадранте";
	if (x < 0 && y < 0) cout << "\nТочка лежит в третьем квадранте";
	if (x > 0 && y < 0) cout << "\nТочка лежит в четвёртом квадранте";
	_getch();
}
void dop9()
{
	system("cls");
	double x, a, b, c;
	cout << "Введите x ";
	cin >> x;
	a = sin(x);
	b = cos(x);
	c = log(abs(x));
	if (a <= b)
	{
		if (c <= a) cout << "\nМинимальное значение  с=ln|x|=" << c;
		else cout << "\nМинимальное значение  a=sin(x)=" << a;
	}
	else
	{
		if (c <= b) cout << "\nМинимальное значение  с=ln|x|=" << c;
		else cout << "\nМинимальное значение  b=cos(x)=" << b;
	}
	_getch();
}
void dop10()
{
	system("cls");
	double x1, y1, x2, y2;
	cout << "Введите координаты точки M1(x1,y1) \n";
	cin >> x1 >> y1;
	cout << "\nВведите координаты точки M2(x2,y2) \n";
	cin >> x2 >> y2;
	double r1,r2;
	r1 = pow(x1, 2) + pow(y1, 2);
	r2 = pow(x2, 2) + pow(y2, 2);
	if (r1 <= r2) cout << "\nТочка M1(" << x1 << "," << y1 << ") ближе к началу координат";
	else cout << "\nТочка M2(" << x2 << "," << y2 << ") ближе к началу координат";
	_getch();
}
void dop11()
{
	system("cls");
	double a, r;
	double M_PI = 3.14159265358979323846;
	cout << "Введите a ";
	cin >> a;
	cout << "\nВведите r ";
	cin >> r;
	double S1 = pow(a, 2), S2 = M_PI * pow(r, 2);
	if (S1 > S2) cout << "\nКвадрат со стороной " << a << " имеет площадь " << S1 ;
	else
		if (S2 > S1) cout << "\nКруг радиусом " << r << " имеет площадь " << S2 ;
		else cout << "\nКвадрат имеет площадь равную площади круга";
		_getch();
}
void dop12()
{
	system("cls");
	double r, x, y, x0, y0;
	cout << "Введите радиус круга r ";
	cin >> r;
	cout << "\nВведите координаты точки M(x , y) \n";
	cin >> x >> y;
	cout << "\nВведите координаты центра круга x0 и y0 \n";
	cin >> x0 >> y0;
	double dist = sqrt(pow(x - x0, 2) + pow(y - y0, 2));
	if (dist <= r) cout << "\nТочка M("<<x<<","<<y<<") попадает в круг с центром в точке ("<<x0<<","<<y0<<") и радиусом "<<r;
	else cout << "\nТочка M("<<x<<","<<y<<") не попадает в круг с центром в точке ("<<x0<<","<<y0<<") и радиусом "<<r;
	_getch();
}
void dop13()
{
	system("cls");
	double x1, y1, x2, y2;
	int n;
	cout << "Выберите систему координат : 1-декартовая , 2-полярная : ";
	cin >> n;
	if (n = 1)
	{
		cout << "\nВведите координаты точки M1(x1 , y1) : \n";
		cin >> x1 >> y1;
		cout << "\nВведите координаты точки M2(x2 , y2) : \n";
		cin >> x2 >> y2;
		double r;
		r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		cout << "\nРасстояние между точками M1("<<x1<< "," <<y1<<") и M2("<<x2<< "," <<y2<<") в декартовой системе координат равно " << r;
	}
	else
	{
		double a1, b1, a2, b2;
		cout << "\nВведите координаты точки M1(r1 , a1) : \n";
		cin >> a1 >> b1;
		cout << "\nВведите координаты точки M2(r2 , a2) : \n";
		cin >> a2 >> b2;
		x1 = a1 * cos(b1);
		y1 = a1 * sin(b1);
		x2 = a2 * cos(b2);
		y2 = a2 * sin(b2);
		double r;
		r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		cout << "Расстояние между точками M1(" << a1 << "," << b1 << ") и M2(" << a2 << "," << b2 << ") в полярной системе координат равно " << r;
	}
	_getch();
}
void dop14()
{
	system("cls");
	double a, b, c, x, y;
	cout << "Введите сторону a кирпича : ";
	cin >> a;
	cout << "\nВведите сторону b кирпича : ";
	cin >> b;
	cout << "\nВведите сторону c кирпича : ";
	cin >> c;
	cout << "\nВведите сторону x отверстия : ";
	cin >> x;
	cout << "\nВведите сторону y отверстия : ";
	cin >> y;
	double s = x * y;
	if (a * b <= s || a * c <= s || b * c <= s) cout << "\nКирпич пройдёт";
	else cout << "\nКирпич не пройдёт";
	_getch();
}
void dop15()
{
	system("cls");
	double P, Q, r, S, R;
	cout << "Введите сторону P ромба : ";
	cin >> P;
	cout << "\nВведите острый угол Q ромба : ";
	cin >> Q;
	cout << "\nВведите радиус R шара : ";
	cin >> R;
	S = P * P * sin(Q);
	r = S / (2 * P);
	if (R < r) cout << "\nШар пройдёт";
	else cout << "\nШар не пройдёт";
	_getch();
}
void dop16()
{
	system("cls");
	int a;
	cout << "Введите трёхзначное число a : ";
	cin >> a;
	cout << "\nКвадрат заданного трехзначного числа равен кубу суммы цифр этого числа?";
	if (pow(a, 2) == pow(a / 100 + (a / 10) % 10 + a % 10, 3)) cout << "\nTrue";
	else cout << "\nFalse";
	cout << "\nВведите четырёхзначное число a : ";
	cin >> a;
	cout << "\nСумма двух первых цифр заданного четырехзначного числа равна сумме двух его последних цифр?";
	if (a / 1000 + (a / 100) % 10 == a % 10 + (a % 100) / 10) cout << "\nTrue";
	else cout << "\nFalse";
	cout << "\nВведите трёхзначное число a : ";
	cin >> a;
	int c1 = a / 100, c2 = (a % 100) / 10, c3 = a % 10;
	cout << "\nCреди цифр заданного трехзначного числа есть одинаковые?";
	if (c1 == c2 || c1 == c3 || c2 == c3) cout << "\nTrue";
	else cout << "\nFalse";
	double b;
	cout << "\nВведите вещественное число b : ";
	cin >> b;
	cout << "\nCреди первых трех цифр из дробной части заданного положительного вещественного числа есть цифра 0?";
	if (int(floor(b * 10 + 0.5)) % 10 == 0 || int(floor(b * 100 + 0.5)) % 10 == 0 || int(floor(b * 1000 + 0.5)) % 10 == 0) cout << "\nTrue";
	else cout << "\nFalse";
	_getch();
}
void end()
{
	system("cls");
	cout << "Нажмите любую клавишу для завершения работы...";
	_getch();
}