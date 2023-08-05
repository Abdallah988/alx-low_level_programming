#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*
*/
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

