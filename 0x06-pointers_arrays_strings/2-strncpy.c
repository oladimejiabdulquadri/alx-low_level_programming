#include "main.h"
/**
  *_strncpy - string copy
  *@dest: destination pointer
  *@src: source
  *@n: chasrs to be cpied
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	{
		src_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = scr_len; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
