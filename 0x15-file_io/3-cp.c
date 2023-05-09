#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * main - copies text from one file to another
 * @ac: number of arguments to the main function
 * @av: array pointer of the arguments to the main function
 * Return: 0 if it is successful
 */
int main(int ac, char **av)
{
	ssize_t read_in = 1;
	char *text_content = malloc(1025);
	int fp_r, fp_w;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	/*
	if (av[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}*/
	fp_r = open(av[1], O_RDONLY);
	if (fp_r < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fp_w = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_w < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	else
	{
		while (read_in != 0)
		{
			read_in = read(fp_r, text_content, 1024);
			if (read_in < 0)
			{
				dprintf(2, "Error: Can't read from file %s\n", av[1]);
				exit(98);
			}
			if (write(fp_w, text_content, read_in) < 0)
			{
				dprintf(2, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}

		}
		if (close(fp_r) < 0)
		{
			dprintf(2, "Error: Can't close fd %d\n", fp_r);
			exit(100);
		}
		else if (close(fp_w) < 0)
		{
			dprintf(2, "Error: Can't close fd %d\n", fp_w);
			exit(100);
		}
	}
	return (0);
}
