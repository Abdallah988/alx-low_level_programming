#include "main.h"
#include <stdio.h>
#include <time.h>

/**
* main - generates random password for 101-crackme
* Return: zero
*/
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 120;
		sum += (c);
		putchat(c);
	}
	putchar(2772 - sum)
	return (0);
}
