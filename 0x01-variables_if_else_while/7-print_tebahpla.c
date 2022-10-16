#include <stdio.h>
**/
*main - print alphabet in reverse
* followed by a new line
* Return : always 0 (success)
* /
int main(void)

{
	char c = 'z';

	while (c >= 'a')

	{
		putchar(c);
		c--;

	}
	putchar('/n');

	return (0);
}
