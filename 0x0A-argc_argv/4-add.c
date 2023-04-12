#include <stdio.h>
/**
 * main - prints the sum of all numbers passed as an argument
 * @argc: number of arguments passed to the function or program
 * @argv: pointer to the array of arguments passed to the program
 * Return: 0 if everything works fine but 1 otherwise
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int num;
	int i;
	int total;

	total = 0;
	num = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (sscanf(argv[i], "%d", &num) != 1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				total += num;
			}
		}
		printf("%d\n", total);
		return (0);
	}
}
