#include "main.h"
/**
  * _abs - Entry point
  * Return: 1 on success
  */
int _abs(int k)
{
	if (k < 0)
		return (k * (-1));
	else if (k == 0)
		return (0);
	else
		return (k);
}
