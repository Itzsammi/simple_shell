#include "shell.h"

/**
 * bfree - it frees a ptr & NULLs the addr
 * @ptr: addr of the ptr to free
 * Return: 1 if freed, otherwise 0.
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
