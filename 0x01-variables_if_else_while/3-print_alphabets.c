#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - returns lower and upper case
 * Return: returns 0 (successful)
 */

int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
