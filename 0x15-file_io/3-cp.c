#include "main.h"
#define buff_s 1024
/**
 * main - copy the content of a file
 * @args: num of argument
 * @argv: argument
 * Return: 0
 */
int main(int args, char *argv[])
{
	char tmp;
	FILE *ffrom = fopen(argv[1], "r");
	FILE *fto = fopen(argv[2], "w");

	if (args != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	if (ffrom == NULL || argv[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fputc(fgetc(ffrom), fto) == EOF)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (argv[2] != NULL)
	{
		while ((tmp[i] = fgetc(ffrom)) != EOF)
		{
			fputc(tmp, fto);
		}
	}
	if (fclose(ffrom) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileno(ffrom));
		exit(100);
	}
	if (fclose(fto) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileno(fto));
		exit(100);
	}
	return (0);
}
