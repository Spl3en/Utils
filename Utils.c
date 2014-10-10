#include "Utils.h"
#include <stdint.h>

void *
malloc_zero (size_t size)
{
	void *memory = malloc(size);
	memset(memory, 0, size);

	return memory;
}


bool
str_is_in_array (char *str, char **array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (!strcmp(str, array[i]))
			return true;
	}

	return false;
}

