#include <iostream>
using namespace std;

int main()
{
	int a, b, temp;

	cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	cout << a << " " << b;

	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << " " << b;
}
