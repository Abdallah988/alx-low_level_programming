#include <stdio.h>
#include <stdlib.h>
/**
* main - it all start here
* @argc: the number of argunents
* @argv: array of pointer to arguments
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	int sum;
	char *c;

	while (--argc)
	{
		for (c = 0; *c; c++)
			if (*c < '0'; || *c > '9')
				return (printf("error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
