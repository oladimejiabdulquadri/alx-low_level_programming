#include <stdio.h>

/**
  * main - prints the alphabet in lowercase, and then in uppercase,
  * followed by a new line
  * Return: Always 0 (sucess)
  */

int main(void)

{
	int ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}