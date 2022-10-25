#inclde "main.h"
/**
  *_strcpy - prints string in pointed src to dest
  *@src: first pointer
  *@dest: second pointer
  * Return: the string to dest
  */
void *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
