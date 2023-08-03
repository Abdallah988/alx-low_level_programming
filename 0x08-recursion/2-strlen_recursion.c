#include "main.h"
/**
*/
int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s > '\0')
	{
		num += (s + 1) + 1;
	}
	return (num);
}
