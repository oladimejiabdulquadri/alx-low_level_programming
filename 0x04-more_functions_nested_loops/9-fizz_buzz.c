#include <stdio.h>
/**
  *main - print 0 to 100
  *FizzBuzzz for multiple of 3 and 5
  *Fizz for multiple of 3, Buzz for multiple of 5
  * Return: always zero
  */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
