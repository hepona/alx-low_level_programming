/**
 * _puts -> print a string
 * @s: character
 */
void _puts(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts(s + 1);
	}
	else
		_putchar('\n');
}
