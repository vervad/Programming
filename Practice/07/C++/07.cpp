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
		double p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "S = " << S;
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
		double p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "S = " << S;
	}
	else
	{
		cout << "Ошибочный ввод.";
	}
	return 0;
}