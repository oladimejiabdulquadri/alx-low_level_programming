#include "mai.h"
/**
  *print_diagonal - print diagonal
  *@n: is the number of times the char \ will be printed
  * Return: always 0
  */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
