#include "main.h"

/**
 * append_text_to_file -> appends text at the end of a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on succed, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	FILE *f;

	if (filename == NULL)
		return (-1);

	f = fopen(filename, "a");

	if (f == NULL)
		return (-1);
	while (text_content[i] != '\0')
	{
		fputc(text_content[i], f);
		i++;
	}
	fclose(f);
	return (1);
}
