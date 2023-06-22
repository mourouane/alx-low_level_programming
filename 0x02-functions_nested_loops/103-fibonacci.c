#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int k = 1, j = 2, sum = 0;
int i;
while (j < 4000000)
{
if (j % 2 == 0)
sum += j;
i = j;
j += k;
k = i;
}
printf("%d\n", sum);
return (0);
}
