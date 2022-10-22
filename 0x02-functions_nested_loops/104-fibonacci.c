#include <stdio.h>
/**
 *main - prints out first 98
 *fibonacci suit numbers
 *Return: return 0
 */
int main(void)
{

	int num1 = 0, num2 = 1;
	int nxtTerm = num1 + num2;
	int i;
	for(i = 3; i <= 98; i++)
	{
<<<<<<< HEAD
		printf ("%d,  ", nxtTerm);
=======
		printf ("%d\n", nxtTerm);
>>>>>>> 01b0e78017d49f50b40a009ca818a2d8aa2db4bb
		num1 = num2;
		num2 = nxtTerm;
		nxtTerm = num1 + num2;
	}
	return (0);
}
