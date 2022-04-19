#include "main.h"

/**
 *_strlen - length of a string
 *@s: A pointer to an int that will be changed/uppdated
 *
 *Return: void that means answer is correct
 */

int _strlen (char *s)
{
	int u;

	u = 0;
	while (s[u] != '\n')
	{
		u++;
	}
	return (u);
}
