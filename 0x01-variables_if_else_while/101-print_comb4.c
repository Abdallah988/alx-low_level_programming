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
	int a, s, d;

	for (a = '0'; a < '9'; a++)
	{
	for (s = a + 1; s <= '9'; s++)
	{
	for (d = s + 1; d <= '9'; d++)
	{
	if ((s != a) != d)
	{
	putchar(a);
	putchar(s);
	putchar(d);
	if (d == '7' && s == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
