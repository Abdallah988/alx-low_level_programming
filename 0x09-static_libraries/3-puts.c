#include "main.h"
#include <stdio.h>
/**
* _puts - a function that prints a string, followed by a new line, to stdout.
* @str: string parameter to print
* Return: void
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
