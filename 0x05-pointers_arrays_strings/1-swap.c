#include "main.h"

/**
 * swap_int -swap values of two integers a and b
 *@n: A pointer 
 *@b: A pointer
 * Return: void that means answer is correct
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b= f;
}
