#include "main.h"
/**
  *print_line - print a straight line
  *@n: the number of times to print the char -
  * Return: always 0
  */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
