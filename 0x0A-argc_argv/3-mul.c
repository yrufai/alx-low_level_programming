#include <stdio.h>
#include <stdlib.h>
/**
  * main - a program what multiplies 2 nums
  * @argc: the # of arguments
  * @argv: the names of them
  *
  * Return: 0
  */
int main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);

}

