#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i;
	bool notprime = false;
	cin >> n;
	for (i = 2; i < (n / 2) + 1; i++)
	{
		if (n % i == 0)
		{
			notprime = true;
			cout << "Составное";
			break;
		}
	}
	if (notprime == false)
	{
		cout << "Простое";
	}
}
