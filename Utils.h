#pragma once

#define sizeof_array(array) \
    ((int)(sizeof(array) / sizeof(*(array))))
