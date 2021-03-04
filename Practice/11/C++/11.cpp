#include <iostream>
using namespace std;

int main()
{
	float a, b = 1;
	int n, i;
	cin >> a >> n;
	for (i = 0; i < abs(n); i++)
	{
		b *= a;
	}
	if (n < 0) b = 1 / b;
	cout << b;
}