#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - Entry point
  * @n: starting point
  * Return: 1 on success
  */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
		printf("%d", n);
		if (n == 98)
			break;
		printf(", ");
		n--;
		}
		printf("\n");
	}
}
