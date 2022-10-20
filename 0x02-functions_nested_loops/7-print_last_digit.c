#include "main.h"
/**
 *print_last_digit- print last digit of a number
 *@n: the integer in question
 *Return: the last digit
 */
int print_last_digit(int n)
{
	n = (n % 10);

	_putchar(n);
	return (n);
}
