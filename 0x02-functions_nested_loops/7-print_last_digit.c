#include <stdio.h>
#include "main.h"



/**
 *  print_last_digit - Check Holberton
 *
 *  @n: An integer input
 *
 *  Description: This function prints the last digit of a number
 *
 *  Return: last digit of number r
 *
 */

int print_last_digit(int n)

{

int print_last_digit = n % 10;

if (print_last_digit < 0)
		print_last_digit *= -1;

_putchar(print_last_digit + '0');

return (print_last_digit);
}
