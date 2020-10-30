#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, D, x1, x2;
	cin >> a >> b >> c;

	if (a == 0)
	{
		if (b == 0)
		{
			cout << "Действительных корней нет.";
		}
		else
		{
			x1 = -(c / b);
			cout << "x = " << x1;
		}
	}
	else
	{
		D = (b * b - 4 * a * c);
		if (D < 0)
		{
			cout << "Действительных корней нет.";
		}
		else if (D == 0)
		{
			x1 = -(b / (2 * a));
			cout << "x = " << x1;
		}
		else
		{
			x1 = (-b + sqrt(D) / (2 * a));
			x2 = (-b - sqrt(D) / (2 * a));
			cout << "x1 = " << x1 << "\n";
			cout << "x2 = " << x2 << "\n";
		}
	}
}