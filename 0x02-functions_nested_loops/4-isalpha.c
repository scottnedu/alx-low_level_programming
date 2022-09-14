#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 * _isalpha - Check if it is an alphabet
 * c: An input Chracter
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
