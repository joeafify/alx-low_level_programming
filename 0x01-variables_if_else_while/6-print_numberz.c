#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Display the state of a number (positive or negative)'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}