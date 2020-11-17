#ifndef COMBINATIONS_H
#define COMBINATIONS_H
#include "Factorial.h"

int comb(int k, int n)
{
	int result = fact(n) / (fact(k) * fact(n - k));
	return result;
}
#endif