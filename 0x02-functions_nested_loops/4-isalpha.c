#include "main.h"
/**
  * _isalpha - Entry point
  * @c: Character to be checked
  * Return 1 on success
  */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
