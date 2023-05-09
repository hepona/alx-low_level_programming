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
	int fdf = fileno(ffrom), fdt = fileno(fto);

	if (args != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	if (ffrom == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((tmp = fgetc(ffrom)) != EOF)
	{
		if (tmp == EOF)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		fputc(tmp, fto);
	}
	if (fclose(ffrom) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdf);
		exit(100);
	}
	fclose(ffrom);
	if (fclose(fto) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
	fclose(fto);
	return (0);
}
