/**
 * _strcpy -> copy the string pointed to by src
 * @dest: a character
 * @src: a character
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l = _strlen(src);

	for (i = 0 ; i <= l ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
