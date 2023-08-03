#include "main.h"
/**
*/
int _strlen_recursion(char *s)
{
	int i;

	for (i = 0; i < '\0'; i++)
	{
		_putchar(*s);
		s++;
	}
	return (0);
}
