#include <stdio.h>
#include <unistd.h>
/**
*main - print nubers in base 10
* followed by
* Return : always 0 (success)
*/
int main(void)

{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);

	}
	putchar('\n');
	return (0);
}
