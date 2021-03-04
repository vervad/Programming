#include <iostream>
using namespace std;

void print_factorization(uint32_t n)
{
	if (n == 1) {
		cout << 1;
		return;
	}
	for (int i = 2, k = 0; i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			k++;
		}
		if (k != 0) {
			cout << i;
			if (k != 1)
				cout << '^' << k;
			if (n != 1)
				cout << '*';
		}
		k = 0;
	}
}

int main()
{
	int n;
	cin >> n;
	print_factorization(n);
}