#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);

int main(void)
{
    char *buffer = create_array(5, 'X');

    if (buffer == NULL)
    {
        printf("Error\n");
        return (1);
    }

    printf("%s\n", buffer);
    free(buffer);
    return (0);
}
