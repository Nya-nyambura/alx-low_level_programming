#include "main.h"

/**
* print_alphabet - Print a-z and print new line
* Return:0
*/


void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}


/**
* print_alphabet_x10 - Print alphaebt 10 times
* Return:0
*/

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		print_alphabet();
		count++;
	}
}
