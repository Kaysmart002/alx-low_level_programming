#include "main.h"

/**
  * print_alphabet - where the program starts
  * Return: 0 on success
  */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
