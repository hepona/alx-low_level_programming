#include <stdio.h>
/**
 * main - prime factor
 * Return: 0
 */

int main(void)
{
	int n = 612852475143;
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		if (n % i == 0
