#include <stdio.h>
#include "main.h"

/**
 *  _isalpha - Check the code to see if it is an alphabet
 *  @c: An input Chracter
 *  Return: Always 0
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
