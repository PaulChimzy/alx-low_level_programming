#include <stdio.h>
/**
 * main - prints the number of arguments to a function
 * @argc: number of arguments to the main function
 * @argv: pointer to the array of arguments
 * Return: 0 if everything works finen
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
