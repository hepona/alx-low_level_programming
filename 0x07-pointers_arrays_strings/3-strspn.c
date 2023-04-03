/**
 * _strspn -> lenght of a prefix substring
 * @s: character
 * @accept: character
 * Return: byte in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int f = 0;
	
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == accept[i])
		{
			f++;
		}
	}
	return (f);
}
