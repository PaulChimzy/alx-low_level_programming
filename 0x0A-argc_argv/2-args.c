#include <stdio.h>
/**
 * main - prints all the arguments passed to it
 * @argc: number of arguments passed to the function
 * @argv: pointer array to the arguments passed to the main function
 * Return: 0 if everything works fine
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
