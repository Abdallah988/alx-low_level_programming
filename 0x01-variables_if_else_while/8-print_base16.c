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
	int a;
	char z;

	for (a = 0; a <= '9'; a++)
	putchar(a);

	for (z = 'a'; z <= 'f'; z++)
	putchar(z);
	putchar('\n');

	return (0);
}
