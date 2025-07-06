#include "main.h"
#include <stdio.h>

int main(void)
{
	printf("%d\n", _atoi("98"));
	printf("%d\n", _atoi("-402"));
	printf("%d\n", _atoi("   --++--98"));
	printf("%d\n", _atoi("Suite 402"));
	printf("%d\n", _atoi("0"));
	printf("%d\n", _atoi("   -   -98 text"));
	printf("%d\n", _atoi("words then 402"));
	return (0);
}
