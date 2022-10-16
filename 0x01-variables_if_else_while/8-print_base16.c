#include <stdio.h>
**/
*main - print all numbers of base sixteen
* followed by a new line
* Return : always 0 (success)
* /
int main(void)

{
	int i;

	for (i = '0'; i <= '9'; i++);
	{
		putchar(i);

	}
	for (i = 'a'; i <= 'f'; i++);

	{
		putchar(i);

	}
	putchar('\n');
	return (0);
}
