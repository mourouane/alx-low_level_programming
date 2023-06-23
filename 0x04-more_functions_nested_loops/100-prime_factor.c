#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int largest_prime_factor = 1;
	long int factor;

	for (factor = 3; factor * factor <= n; factor += 2)
	{
		while (n % factor == 0)
		{
			largest_prime_factor = factor;
			n /= factor;
		}
	}
	if (n > 2)
	{
		largest_prime_factor = n;
	}
	printf("%ld\n", largest_prime_factor);
	return (0);
}
