#include <stdio.h>
/**
 * main - Entry point
 * Description: print all letters except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}

