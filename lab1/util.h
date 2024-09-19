/* COPYRIGHT (C) HARRY CLARK 2024 */

/* CS2_PLC DEMONSTRATIONS */

/* THIS FILE PERTAINS TOWARDS THE FUNCTIONALITY OF DISCERNING THE TOTAL */
/* WHEN TWO INTEGERS ARE ADDED */

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
#define     MULTIPLY(VALUE_A, VALUE_B)          (VALUE_A * VALUE_B)
#define     SUBTRACT(VALUE_A, VALUE_B)          (VALUE_A - VALUE_B)
#define     DIVIDE(VALUE_A, VALUE_B)            ((VALUE_B) != 0 ? ((VALUE_A) / (VALUE_B)) : -1)

#endif
#endif
