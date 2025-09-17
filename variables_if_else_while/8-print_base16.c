#include <stdio.h>

int main(void)
{
    int i;

    for (i = 48; i <= 57; i++)  /* ASCII pour '0' a '9' */
        putchar(i);

    for (i = 97; i <= 102; i++) /* ASCII pour 'a' a 'f' */
        putchar(i);

    putchar('\n');

    return (0);
}
