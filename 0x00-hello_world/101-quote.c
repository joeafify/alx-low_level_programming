#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Program entry point
 *
 * Return: 1
 */
int main(void)
{
	write(STDERR_FILENO , "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
