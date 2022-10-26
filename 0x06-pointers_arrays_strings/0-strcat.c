#include "main.h"
/**
 *_strcat - append a string and overwrite the terminating null byte
 *at the end of the receiving string
 *@dest: pointer to append to
 *@src: pointer to string to append to dest
 * Return: the destination string
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	c2 = 0;

	while (src[c2] != '\0')
	{
		dest[c] = src[c2];
		c++;
		c2++;
	}
	/*dest[c] = '\0';*/

	return (dest);
}
