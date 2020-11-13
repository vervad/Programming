#include <iostream>
#include "Taylor.h"

int main()
{
	float n;
	int k;
	std::cin >> n;
	std::cin >> k;
	std::cout << sin(n, k);
}