#include "main.h"
/**
  *_strlen - a functions that returns the lenght of a string
  *@s: the string in question
  * Return : Always 0
  */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
