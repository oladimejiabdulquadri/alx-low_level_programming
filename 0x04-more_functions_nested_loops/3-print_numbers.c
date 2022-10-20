#include "main.h"
/**
  *print_numbers - print 0 throuhg 9
  *you can only use _putchar twice
  */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
