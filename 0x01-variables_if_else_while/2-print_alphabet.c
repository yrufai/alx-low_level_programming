#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabelts
 * Return: returns 0 (successful)
 */
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
