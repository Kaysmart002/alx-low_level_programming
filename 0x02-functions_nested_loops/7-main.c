#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int r;
	int n;

	r = print_last_digit(-1024);
	n = print_last_digit(1024);
	_putchar(r);
	_putchar(n);
	_putchar('\n');
return (0);
}
