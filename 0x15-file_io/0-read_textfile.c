#include "main.h"
/**
 * read_textfile -> read text file and print it
 * @filename: name of the file
 * @letters: num of letters it should read & print
 * Return: num of letters it couls read & print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i;
	char c;
	FILE *file;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	for (i = 0 ; i < letters ; i++)
	{
		c = fgetc(file);
		if (c == EOF)
			break;
		_putchar(c);
	}
	fclose(file);
	return (i);
}
