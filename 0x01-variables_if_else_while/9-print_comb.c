#include <stdio.h>
/**
  * main - the program starts here
  * Return: always 0 on success
  */
int main(void)
{
	int num;
for (num = 48; num < 58; num++)
{
	putchar(num);
	if (num != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
