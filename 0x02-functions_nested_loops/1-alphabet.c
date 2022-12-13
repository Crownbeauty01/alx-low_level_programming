#include "main.h"

/**
 * print_alphabet - all in lowercase, followed by a new line
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
