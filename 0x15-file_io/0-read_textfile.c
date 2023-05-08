#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads in a text file and prints to the POSIX standard output
 * @filename: pointer to the filename from which to be read
 * @letters: Number of letters to be read from the file
 * Return: the number of bytes written to the output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_in;
	ssize_t write_out;
	char *writings = malloc(letters);
	int fp;

	if (filename == NULL)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp < 0)
	{
		return (0);
	}
	else
	{
		read_in = read(fp, writings, letters);
		close(fp);
		if (read_in > 0)
		{
			write_out = write(1, writings, letters);
		}
	}
	return (write_out);
}
