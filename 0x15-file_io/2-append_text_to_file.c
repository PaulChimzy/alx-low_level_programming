#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * _strlen - determine the length of a string
 * @s: pointer to the string (array of characters)
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * create_file - appends text to a file
 * @filename: pointer to the filename to be created
 * @text_content: Text to be written to the file
 * Return: 1 if it is successful and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t write_out;
	int fp;
	int lent = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	else
	{
		lent = _strlen(text_content);
		write_out = write(fp, text_content, lent);
		close(fp);
		if (write_out > 0)
		{
			return (1);
		}
	}
	return (-1);
}
