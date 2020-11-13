#include <iostream>
using namespace std;

int main()
{
	double x0, v0, t; //double позволит дать значениям большую точность, чем int
	double x, xt, a = 9.8;
	cin >> x0 >> v0 >> t;
	xt = x0 + v0 * t - (a * t * t) / 2;
	x = abs(x0 - xt);
	cout << x;
}