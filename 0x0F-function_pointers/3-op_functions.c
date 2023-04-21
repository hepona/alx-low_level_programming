#include "3-calc.h"

/**
 * op_add -> addition
 * @a: first num
 * @b: second num
 * Return: result
 */
int op_add(int a, int b)
{
	int r = a + b;

	return (r);
}
/**
 * op_sub -> difference
 * @a: first num
 * @b: second num
 * Return: result
 */
int op_sub(int a, int b)
{
	int r = a - b;

	return (r);
}
/**
 * op_mul -> product
 * @a: first num
 * @b: second num
 * Return: result
 */
int op_mul(int a, int b)
{
	int r = a * b;

	return (r);
}
/**
 * op_div -> division
 * @a: first num
 * @b: second num
 * Return: result
 */
int op_div(int a, int b)
{
	int r = 0;

	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	r = a / b;
	return (r);
}
/**
 * op_mod -> remainder of division
 * @a: first num
 * @b: second num
 * Return: result
 */
int op_mod(int a, int b)
{
	int r = 0;

	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	r = a % b;
	return (r);
}
