#include "header.h"

/**
 * array_cle - Clears a double pointer
 * @str: Double pointer to clean
 *
 * Return: 1
 */

int array_cle(char **str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		free(str[i]);
	}
	free(str);

	return (1);
}
