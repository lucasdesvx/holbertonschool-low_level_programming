#include <unistd.h>

/**
 * main - Prints a quote to stderr using write only
 *
 * Return: Always 1 (failure)
 */
int main(void)
{
    char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(2, msg, sizeof(msg) - 1);
    return (1);
}
