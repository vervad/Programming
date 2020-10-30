#include <iostream>
using namespace std;

int main()
{
	int n, x, i = 0;
	cin >> n;
	for (x = 1; x <= n; i++, x *= 2);
	cout << i;
}