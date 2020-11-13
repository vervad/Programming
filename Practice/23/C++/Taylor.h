#ifndef TAYLOR_H
#define TAYLOR_H
#include "Factorial.h"
#include <cmath>

float sin(float n, int k)
{
	float result = 0;
	for (int i = 0; i <= k; i++)
	{
		result += (pow(-1, i) * pow(n, 2 * i + 1)) / fact(2 * i + 1);
	}
	return result;
}
#endif