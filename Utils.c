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

/*
 * Description : Writes in a buffer the current date detected
 * char *buffer : A buffer *WITH A LEAST 20 BYTES ALLOCATED*
 */
void
get_now_buffer (
	__out__ char *buffer
) {
	// Get time and start logging
	struct tm now = *localtime ((time_t[]) {get_now ()});
	sprintf(buffer, "%4d-%02d-%02d %02d:%02d:%02d",
		now.tm_year + 1900, now.tm_mon + 1, now.tm_mday, now.tm_hour, now.tm_min, now.tm_sec);
}


/*
 * Description : Writes in a buffer the current date detected
 * Return : A string containing the current date
 */
char *
get_now_str (
	void
) {
	char * buffer = calloc (1, 20);
	get_now_buffer (buffer);
	return buffer;
}


/*
 * Description : Return a time_t structure containing the current date detected
 * Return : The current date
 */
time_t
get_now (
	void
) {
	return time (NULL);
}
