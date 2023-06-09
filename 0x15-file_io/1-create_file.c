#include "main.h"
#include <sys/stat.h>
/**
 * create_file -> create a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *f = fopen(filename, "w");
	int i;

	if (filename == NULL)
		return (-1);
	if (f == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0 ; text_content[i] != '\0' ; i++)
		{
			fputc(text_content[i], f);
		}
	}
	fclose(f);
	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
		return (-1);
	return (1);
}
