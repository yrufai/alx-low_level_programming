#include <stdio.h>
/**
 *main - prints out first 98
 *fibonacci suit numbers
 *Return: return 0
 */
int main(void)
{

	unsigned int num1 = 0, num2 = 1;
	unsigned int nxtTerm = num1 + num2;
	int i;
	for(i = 3; i <= 98; i++)
	{
		printf ("%d, ", nxtTerm);
		num1 = num2;
		num2 = nxtTerm;
		nxtTerm = num1 + num2;
	}
	return (0);
}
