/* CS2_PLC DEMONSTRATIONS */

/* THIS FILE PERTAINS TOWARDS THE FUNCTIONALITY OF PASSING A FUNCTION AS AN ARG */
/* TO ANOTHER FUNCTION */

#ifndef CS2_PLC_LAB_1
#define CS2_PLC_LAB_1

/* SYSTEM INCLUDES */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#if defined(USE_UTIL)
#define USE_UTIL
#else
#define USE_UTIL

#define     ADD(VALUE_A, VALUE_B)               (VALUE_A + VALUE_B)

typedef struct FUNCTION_ARGS
{
    unsigned VALUE_A;
    unsigned VALUE_B;

} FUNCTION_ARGS;

#endif
#endif