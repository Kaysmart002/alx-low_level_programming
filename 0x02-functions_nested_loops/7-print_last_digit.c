#include "main.h"
/**
  * print_last_digit - Entry point
  * @k: Variable
  * Return: The last number of k
  */
int print_last_digit(int k)
{
	int n = k % 10;
	if (k < 0)
	{
		_putchar((-1 * n) + '0');
		return (-1 * n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
