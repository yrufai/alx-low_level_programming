#include "main.h"

/**
*  _strncpy - C function that copies a string
*  @dest: buffer storing the string copy
*  @src: source of the string
*  @n:max nummber of byte copied
*  Return: returns 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for (i = 0; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
