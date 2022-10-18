#include <stdio.h>
/**
 *print-alphabet - Entry point
 * Description : a function that prints the alphabet,
 * in lowercase
 * return : void
 */
void print_alphabet(void);
{
	char letter = 'a';

	while (letter <= 'z')
	{
		-putchar(letter);
		letter++;
	}
	-putchar('\n');
}
