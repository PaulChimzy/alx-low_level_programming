#include <stdio.h>
/**
 * main - prints the multiplication passed as an argumnet to the main function
 * @argc: the number of arguments to the function main
 * @argv: pointer to the array of argumnts to the program
 * Return: 0 if everything works fine 1 otherwise
 */
int main(int argc, char *argv[])
{
	int f_dt;
	int s_dt;

	if (argc == 3)
	{
		if (sscanf(argv[1], "%d", &f_dt) == 1 && sscanf(argv[2], "%d", &s_dt) == 1)
		{
			printf("%d\n", (f_dt * s_dt));
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
