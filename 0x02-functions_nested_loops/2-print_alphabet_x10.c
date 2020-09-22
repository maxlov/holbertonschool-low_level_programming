/**
 * print_alphabet_x10 - prints alphabet 10x in lowercase to stdout
 *
 */

void print_alphabet_x10(void)
{
	int row;
	int ch;

	for (row = 0; row < 10; row++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}
