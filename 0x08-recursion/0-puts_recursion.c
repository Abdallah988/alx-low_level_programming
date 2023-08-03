#include "main.h"
/**
* _puts_recursion - entry point
* @s: input pointer to print string
* Return: print a string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
		_putchar(*s);
		s++;
}
