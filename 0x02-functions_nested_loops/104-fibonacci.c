#include <stdio.h>
/**
 *main - prints out first 98
 *fibonacci suit numbers
 *Return: return 0
 */
int main(void)
{
<<<<<<< HEAD
	int num1 = 0, num2 = 1;
	int nxtTerm = num1 + num2;
	int i;
	for(i = 3; i <= 98; i++)
	{
		printf ("%d\n", nxtTerm);
		num1 = num2;
		num2 = nxtTerm;
		nxtTerm = num1 + num2;
	}
	return (0);
=======
int num1 = 0, num2 = 1;
int nxtTerm = num1 + num2;
for (int i = 3; i <= 98; i++)
{
printf("%d\n", nxtTerm);
num1 = num2;
num2 = nxtTerm;
nxtTerm = num1 + num2;
}
return (0);
>>>>>>> 17459a1855d5f13b7eecd6ec693e563e4cd2c041
}
