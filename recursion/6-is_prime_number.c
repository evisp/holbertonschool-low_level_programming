#include "main.h"
/**
 * prime - check for prime number
 * @n: number
 * @i: number
 * Return: 1 if integer is prime number otherwise return 0
 */
int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);
	else
		return (prime(n, i + 1));
}
/**
 * is_prime_number - call function prime
 * @n: number
 * Return: prime function
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
