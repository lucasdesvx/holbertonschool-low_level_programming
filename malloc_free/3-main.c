#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - test array_range function
 * Return: 0
 */
int main(void)
{
    int *arr;
    int i;

    arr = array_range(0, 10);
    if (arr == NULL)
        return (1);

    for (i = 0; i <= 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return (0);
}
