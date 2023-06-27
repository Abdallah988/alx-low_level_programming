#include "main.h"
/**
* _strlen - the length of a string.
* @s: string parameter input
* Return: length of string
*/
int _strlen(char *s)
{
	int counter = 0;

	while (*s++)
		++counter;
		return (counter);
}
