#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double S;
	double a, b, c;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		cin >> a >> b >> c;
		if (a < b + c) && (b < a + c) && (c < a + b)
		{
			double p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S = " << S;
		}
		else cout << "Такого треугольника не существует.";
	}
	else if (choice == 2)
	{
		double Ax, Ay, Bx, By, Cx, Cy;
		cin >> Ax >> Ay;
		cin >> Bx >> By;
		cin >> Cx >> Cy;
		a = sqrt((Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay));
		b = sqrt((Cx - Bx) * (Cx - Bx) + (Cy - By) * (Cy - By));
		c = sqrt((Cx - Ax) * (Cx - Ax) + (Cy - Ay) * (Cy - Ay));
		if (a < b + c) && (b < a + c) && (c < a + b)
		{
			double p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S = " << S;
		}
		else cout << "Такого треугольника не существует.";
	}
	else cout << "Ошибочный ввод.";
}