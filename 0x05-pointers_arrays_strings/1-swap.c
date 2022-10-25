#include "main.h"
/**
  *swap_int - swaps the values of two numbers
  *@a: first number
  *@b: second number
  * Return: Always 0
  */
void swap_int(int *a, int *b)
{
	int constant = *a;
	*a = *b;
	*b = constant;
}
