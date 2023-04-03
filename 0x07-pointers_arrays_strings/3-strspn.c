/**
 * _strspn -> lenght of a prefix substring
 * @s: character
 * @accept: character
 * Return: byte in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int flag = 0;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				flag++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (flag);
}
