#include "mai.h"
/**
  *print_rev - print a string in reverse
  *@s: the actual string
  * Return: always 0
  */
void print_rev(char *s)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++
	}

	len1 len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
