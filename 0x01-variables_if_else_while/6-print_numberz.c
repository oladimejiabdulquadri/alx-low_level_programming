#include <stdio.h>
#include <unistd.h>
/**
*main - print all digits between 10 and 0
* followed by a new line
* Return : always 0 (success)
*/
int main(void)

{
	int n;

	for (n = 0; n < 10; n++)
	{
		putcahr(n + '0');

	}
	putchar('\n');
	return (0);
}
