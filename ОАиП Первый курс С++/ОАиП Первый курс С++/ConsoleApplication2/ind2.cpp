#include <iostream> 
#include <conio.h> 
#include <cmath> 
using namespace std;
int main()
{
	setlocale(0, "rus");
	double x, y, s;
	cout << "¬ведите x: ";
	cin >> x;
	cout << "\n¬ведите y: ";
	cin >> y;

	if ((x*y) > 0)
		s = pow((x+y),2)-pow(fabs(x),1/3);
	else if ((x*y) < 0)
		s = pow((x + y), 2) + sin(x) ;
	else
		s = pow((x + y), 2)+pow(y,3);
	cout << "\nx = " << x << " \ny = " << y ;
    cout << "\ns = " << s ;
	_getch();
	return 0;


}