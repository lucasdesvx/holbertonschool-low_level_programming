#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @absolute: integer to convert
 *
 * Return: the absolute value of absolute
 */
int _abs(int absolute)
{
	if (absolute < 0)
		return (-absolute);

	return (absolute);
}
