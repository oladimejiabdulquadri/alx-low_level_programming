#include "main.h"
/**
  *_strncat - concatenate strings
  *@src: source string
  *@dest: destination string
  *@n: number of letters to be concatenated from a string
  * Return: the dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
