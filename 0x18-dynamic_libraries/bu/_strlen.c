/**
 * _strlen -> return lenght of a string
 * @s: a character
 * Return: lenght of s
 */
int _strlen(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	else
		return (0);
}
