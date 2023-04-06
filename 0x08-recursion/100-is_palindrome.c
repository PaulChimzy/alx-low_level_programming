#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - determines the number of characters in a string
 * @s: pointer to the string
 * Return: an integer count of the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion((s + 1)));
	}
}
/**
 * recursion - determines palindrome
 * @s: pointer to the string
 * @count: length of the string
 * Return: 1 if string is palindrome otherwise 0
 */
int recursion(char *s, int count)
{
	if (s == (s + count)|| (s + 1) == (s + count))
	{
		if (*s == *(s + count))
		{
			return (1);
		}
		return (0);
	}
	else if (*s == *(s + count))
	{
		return (recursion((s + 1), (s + count -1)));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: pointer to the string to be checked
 * Return: 1 if string is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	int str_count;

	if (*s == '\0')
	{
		return (1);
	}
	str_count = _strlen_recursion(s) - 1;
	return (recursion(s, str_count));
}
