#include <stdio.h>
/**
* main - Entry point of aprogram
*
*Return: Always 0 (success)
*/
int main(void)
{
	char alpha, e, q;

	e = 'e';
	q = 'q';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha != e && alpha != q)
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
