#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: argument counter
* @argv: argument value
* @mul: multiplicate
* Return: 0
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

