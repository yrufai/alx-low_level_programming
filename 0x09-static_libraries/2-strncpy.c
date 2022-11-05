#include "main.h"

/*
#include "main.h"

/**
*  _strncpy - C function that copies a string
*  terminating null byte, using at most an inputted number of bytes.
*  If the length of the source string 
*  the remainder of the destination string is filled with null bytes.
*  Works identically to the standard library function `strncpy`
*@dest: buffer storing the string copy
*@n:max nummber of byte copied
*Return: returns 0
*/

char *_strncpy(char *dest, char *src, int n)
{
int 1;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}

