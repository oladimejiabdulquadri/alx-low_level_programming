#include "main.h"
/**
  *print_sign - print sign of numbers
  *Return: 0 and print 0 if n=0
  *1 and print + if n>0
  *-1 and print - if n<0
  *@n: the int to be tested
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
