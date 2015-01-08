#pragma once

#include <time.h>
#include <stdio.h>

// ----- DLL export -----
#ifndef EXPORT_FUNCTION
	#define EXPORT_FUNCTION __declspec(dllexport)
#endif

// ----- Type size -----
#define sizeof_array(array) \
    ((int)(sizeof(array) / sizeof(*(array))))

#define sizeof_struct_member(struct, member) \
   (sizeof(((struct *)0)->member))


// ----- Enumeration string association -----
typedef struct EnumerationStringAssociation {
	int enumeration;
	char *string;
} EnumerationStringAssociation;
#define associate(x) [x] = {x, STRINGIFY(x)}


// ----- Boolean -----
#ifndef BOOL
#ifdef WIN32
#include <windows.h>
#else
#define BOOL char
#endif // WIN32
#endif // BOOL

#ifndef bool
#define bool BOOL
#endif

#ifndef TRUE
#define TRUE 1
#endif // TRUE

#ifndef false
#define false (!(TRUE))
#endif

#ifndef true
#define true TRUE
#endif

#ifndef false
#define false FALSE
#endif

#define __out__
#define __in__
#define __opt__
#define __inout__

// Stringify
#define STRINGIFY(x) # x

bool
is_in_array (int value, int *array, int size);

int
str_is_in_array (char *value, char **array, int size);

void *
malloc_zero (size_t size);

time_t
get_now (void);

char *
get_now_str (void);
