#include "main.h"
/**
  *_put - print a string to standard output
  *@str: the standard ouput
  * Return: Always 0
  */
void _put(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
