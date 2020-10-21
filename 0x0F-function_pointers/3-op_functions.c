#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two ints
 * @a: number 1
 * @b: number 2
 *
 * Return: answer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: number 1
 * @b: number 2
 *
 * Return: answer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: number 1
 * @b: number 2
 *
 * Return: answer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: number 1
 * @b: number 2
 *
 * Return: answer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus two ints
 * @a: number 1
 * @b: number 2
 *
 * Return: answer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
