#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: argument counter
* @argv: argument value
* Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	/*we can remove unused and using void (argv);*/
	return (0);

}
