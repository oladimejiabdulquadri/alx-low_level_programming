#include "main.h"
/**
  *reverse_array - reverse content of an array of integers
  *@a: the array of integers
  *@n: number of elements of the array
  * Return: 0
  */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
	return (0);
}
