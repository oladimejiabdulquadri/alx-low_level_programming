#include <stdio.h>
**/
*main - print alphabet in reverse
* followed by a new line
* Return : always 0 (success)
* /
int main(void)

{
	int i;

	for (i = 'Z' ; i >= 'A'; i--)

	{
		putchar("%c",i);

	}
	putchar('\n');
	return (0);
}
