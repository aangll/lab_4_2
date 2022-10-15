// Lab_04_1.cpp
// Мацкули Ангеліни
// Лабораторна робота № 4.2
// Цикли.
// Варіант 17


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = x * x + 1;
		if (x < 4)
			B = 4 * pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
		else
			if (x >= 1)
				B = log(abs(2 * x + exp(4 * x + 1)));
			else
				B = atan((fabs(x) + 1) / 2) + 8, 3 * x;
		y = A + B;
		cout << "|" << setw(5) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}