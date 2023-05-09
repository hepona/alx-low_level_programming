#include "main.h"
#define buff_s 1024
/**
 * main - copy the content of a file
 * @args: num of argument
 * @argv: argument
 */
int main(int args, char *argv[])
{
	int fdf, fdt;
	char tmp;
	FILE *ffrom = fopen(argv[1], "r");
	FILE *fto = fopen(argv[2], "w");

	fdf = fileno(ffrom);
	fdt = fileno(fto);

	if (args != 3)
	{
		dprintf(fdf, "Usage: cp %s %s\n", argv[1], argv[2]);
		return (97);
	}
	if (ffrom == NULL)
	{
		dprintf(fdf, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	while ((tmp = fgetc(ffrom)) != EOF)
	{
		if (tmp == EOF)
		{
			dprintf(fdf, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}

		fputc(tmp, fto);
	}
	if (fclose(ffrom) != 0)
	{
		dprintf(fdf, "Error: Can't close fd %d\n", fdf);
		return (100);
	}
	fclose(ffrom);
	if (fclose(fto) != 0)
	{
		dprintf(fdt, "Error: Can't close fd %d\n", fdt);
		return (100);
	}
	fclose(fto);
	return (0);
}
