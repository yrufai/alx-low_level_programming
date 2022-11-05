#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c:  is the int that will use for the argument of the function
 *
  * Return: 1 if character is lowercase, 0 otherwise.
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
