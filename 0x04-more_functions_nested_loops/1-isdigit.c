#include "main.h"
/**
 *_isdigit - check if a number is 0 through 9
 *@c: the char in question
 * Return: return 1 if its 0 through 9, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
