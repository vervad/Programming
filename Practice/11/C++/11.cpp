#include <iostream>
using namespace std;

int main()
{
	float a, b = 1;
	int n, i;
	cin >> a >> n;
	for (i = 0; i < n; i++)
	{
		b *= a;
	}
	cout << b;
}