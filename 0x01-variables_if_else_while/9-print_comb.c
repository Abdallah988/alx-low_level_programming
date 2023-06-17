#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of a program
*
* Return: Always 0 (success)
*/
int main(void)
{
	int d;

	for (d = 'o'; d <= '9'; d++)
	{
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);

}
