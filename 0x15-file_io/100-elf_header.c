#include "main.h"

/**
 * main - display information of elf
 * @argv: arguments
 * @argc: num of arguments
 * Return: 0
 */
int main (int argc, char *argv[])
{
	char elf_header = argv[1], elf_filename = argv[2];
	FILE f = fopent(elf_filename, "r");

	if (f == NULL)
		return (98);
	printf("ELF Header:\n");
	printf("  Magic:   ");
	fprintf("%s", 
