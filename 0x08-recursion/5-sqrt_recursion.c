#include "main.h"

/**
*/
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	else if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqrt_recursion(n, i + 1));
}
