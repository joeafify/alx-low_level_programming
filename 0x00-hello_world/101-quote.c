#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Program entry point
 *
 * Return: 1
 */
int main(void)
{
	char str[120];	
	char quote[] = "and that piece of art is useful";
	char teller[] = "Dora Korpar";
	char date[] = "2015-10-19";
	strcat(str, quote);
	strcat(str, "\" - ");
	strcat(str, teller);	
	strcat(str, ", ");
	strcat(str, date);
	strcat(str, "\n");
	write(STDERR_FILENO , str, 59);
	return (1);
}
