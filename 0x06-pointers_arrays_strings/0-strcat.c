#include "main.h"
/**
  *_strcat - append a string and overwrite the terminating null byte at the end of the receiving string
  *@dest: pointer to append to
  *@src: pointer to string to append to dest
  */
char *_strcat(char *dest, char *src)
{
	int c, c2;
	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
