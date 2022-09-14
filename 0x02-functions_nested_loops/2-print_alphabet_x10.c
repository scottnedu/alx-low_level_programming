#include <stdio.h>
#include "main.h"


/**
 *
 *   print_alphabet_x10 - Check holberton
 *
 *   Description: function uses _putchar function to print
 *
 *   alphabet in lowercase 10 times
 *
 *   Return: Nothing.
 *
 */



void print_alphabet_x10(void)

{

	char c;

	int i;


	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		}

}
