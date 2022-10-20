#include "mai.h"
/**
  *print_diagonal - print diagonal
  *@n: is the number of times the char \ will be printed
  * Return: always 0
  */
void print_diagonal(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;

	}
	if (i == 0)

		_putchar('\n');
}
