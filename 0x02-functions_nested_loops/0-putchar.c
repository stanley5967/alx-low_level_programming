#include <unistd.h>

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: o (Success)
 */

int main(void)
{
	char text[10] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
