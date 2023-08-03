#include "main.h"
/**
* factorial - is recursion
* @n :integer
* Return: the factorial number
*/
int factorial(int n)
{
	if (n < '0')
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n-1));
}
