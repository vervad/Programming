#include <iostream>
#include <iomanip>
#include "Factorial.h"
#include "Taylor.h"
#include "Combinations.h"
using namespace std;

int main()
{
	cout << "n" << "\t" << "n!" << "\n";
	for (int n = 1; n <= 10; n++)
	{
		cout << n << "\t" << fact(n) << "\n";
	}
	cout << "\n";

	cout << "x" << "\t" << "sin(x)" << "\n";
	for (float x = 0; x <= 3.141592/4; x += 3.141592/180)
	{
		cout << x << "\t" << setprecision(4) << sin(x, 5) << "\n";
	}
	cout << "\n";

	cout << "k" << "\t" << "C(k, 10)" << "\n";
	for (int k = 1; k <= 10; k++)
	{
		cout << k << "\t" << comb(k, 10) << "\n";
	}
}