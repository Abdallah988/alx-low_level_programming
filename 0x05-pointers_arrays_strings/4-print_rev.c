#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by new line.
* @s: pointer to string to print
* Return: void
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
	i++;
	}
	while (i--)
	{putchar(s[i]);
	}
	putchar('\n');
}
