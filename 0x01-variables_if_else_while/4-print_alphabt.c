#include <stdio.h>
#include <unistd.h>
/**
*main - prints the alphabets in lowercase
* followed by a new line, except q and e
* Return : always zero(success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')

		{
			putchar(c);

		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
