#include <stdio.h>
#include "main.h"
/**
* checker - checks the input number from n to the r
* @n: number is squared and compared against r
* @r: base number to check
* Return: natural square root of number r
*/
int checker(int n, int r)
{
	if (n * n == r)
		return (n);
	if (n * n > r)
		return (-1);
	return (checker(n + 1, r));
}
/**
* _sqrt_recursion - return the natural square root of a number n.
* @n: number to check for square roots.
* Return: the natural square root of number n
*/
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
