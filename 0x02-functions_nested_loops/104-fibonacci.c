#include <stdio.h>
int main() {
	int num1 = 0, num2 = 1;
	int nxtTerm = num1 + num2;
	for(int i=3; i<=98; i++)
	{
		printf("%d\n",nxtTerm)
		num1 = num2;
		num2 = nxtTerm;
		nxtTerm = num1 + num2;
	}
	return 0;
}
