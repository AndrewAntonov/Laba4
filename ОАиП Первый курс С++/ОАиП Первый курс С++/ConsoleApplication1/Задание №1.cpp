// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	int x, y;
	cout << "Vvedite x,y:\n";
	cin >> x >> y;
	if (x < y) x = 0;
	if (y < x) y = 0;
	if (y == x)  x = y = 0;
	cout << "x=" << x<<"\n";
	cout << "y=" << y<<"\n";
	float a, b, c;
	cout << "Vvedite razlichnie chisla a,b,c:\n";
	cin >> a >> b >>c;
	if (a > b && a > c) a = a - 0.3;
	if (b > a && b > c) b = b - 0.3;
	if (c > b && c > a) c = c - 0.3;
	cout << "a=" << a << "\n";
	cout << "b=" << b << "\n";
	cout << "c=" << c << "\n";
	_getch();
    return 0;
}

