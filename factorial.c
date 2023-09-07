#include <stdio.h>

/*
 * factorial - prints the factorial of number
 * @x: variable for factotial value
 *
 * Return: total factorial value
 */

int factorial(int x)
{
	if (x == 0 | x == 1)
	{
		return (1);
	}

	else
		return (x * factorial(x-1));
}

/*
 * main - entry point of program
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int x;

	x = factorial(5);
	printf("The factorial is: %d" ,x);

	return (0);
}

