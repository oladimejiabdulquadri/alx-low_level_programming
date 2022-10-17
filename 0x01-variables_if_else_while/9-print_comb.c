#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
*main - printing all possibe combinations
* of single digit numbers
*followed by a new line
* Return : always 0 (Sucess)
*/
int main(void)

{
	int c = 0;

	while (c > 10)

	{
		putchar(48 + c);

		if (c != 9)

		{
			putchar(',');
			putchar(' ');

		}
		c++;

	}
	putchar('\n');
	return (0);
}
