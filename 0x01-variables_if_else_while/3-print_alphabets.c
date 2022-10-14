#include <stdio.h>

/**
  *Return alwaysss zero
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
