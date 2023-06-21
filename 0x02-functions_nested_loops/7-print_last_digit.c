#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: int to extract the last digit from
* Return: the last digit
*/
int print_last_digit(int n)
{
int m;
if (n < 0)
n = -n;
m = n % 10;
if (m < 0)
m = -m;
_putchar(m + '0');
return (m);
}
