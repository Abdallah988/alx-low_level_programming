#include "main.h"
/**
* _print_rev_recursion - entry point prints string in reverse
* @s: pointer
* Return: void
*/
void _print_rev_recursion(char *s)
{
	while (*s > '\0')
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}
