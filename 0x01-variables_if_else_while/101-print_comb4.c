#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Display the state of a number (positive or negative)'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (n = j + 1; n <= '9'; n++)
			{
				if (i != j)
				{
					putchar(i);
					putchar(j);
					putchar(n);
					if (i == '7' && j == '8' && n == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
