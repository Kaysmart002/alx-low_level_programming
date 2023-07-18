#include "main.h"
/**
  * print_sign - Entry point
  * @n: what to be checked
  * Return: 1 on success
  */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
