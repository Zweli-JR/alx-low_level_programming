#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}

void print_alphabet_x10()
{
	int count = 0;
	char letter = 'a';
	while (count <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++
		}
		_putchar('\n')
	}
}
