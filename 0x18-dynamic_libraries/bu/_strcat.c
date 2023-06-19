/**
 * _strcat -> concatenate two string
 * @dest: a character
 * @src: a character
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int ls = _strlen(src);
	int ld = _strlen(dest);

	for (i = 0 ; i <= ls ; i++)
	{
		dest[ld + i] = src[i];
	}
	return (dest);
}
