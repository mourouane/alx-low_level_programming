#include<stdio.h>
/**
 * main - Entry point
 * Description: prin 0-9 using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
