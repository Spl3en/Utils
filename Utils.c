#include "Utils.h"
#include <stdint.h>

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

