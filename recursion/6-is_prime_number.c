/**
 * is_prime_recursive - checks whether n has a divisor from start onward
 * @n: number being checked
 * @start: first possible divisor
 *
 * Return: 1 if n is prime, otherwise 0
 */
static int is_prime_recursive(int n, int start)
{
	if (start > n / start)
		return (1);

	if (n % start == 0)
		return (0);

	return (is_prime_recursive(n, start + 1));
}

/**
 * is_prime_number - checks whether an integer is prime
 * @n: integer to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_recursive(n, 2));
}
