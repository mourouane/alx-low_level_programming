#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
int al;
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
_putchar('\n');
}
}
