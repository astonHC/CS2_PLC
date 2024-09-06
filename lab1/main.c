/* COPYRIGHT (C) HARRY CLARK 2024 */

/* CS2_PLC DEMONSTRATIONS */

/* THIS FILE PERTAINS TOWARDS THE FUNCTIONALITY OF DISCERNING THE TOTAL */
/* WHEN TWO INTEGERS ARE ADDED */

/* SYSTEM INCLUDES */

#include <stdio.h>

static char FIND_TOTAL(void)
{
    int INDEX = 0;
    int TOTAL = 0;

    for (INDEX = 0; INDEX <= 10; INDEX++)
    {
        TOTAL = TOTAL + INDEX;
    }

    return TOTAL;
}

int main(void)
{
    printf("The total is: %d\n", FIND_TOTAL());
    return 0;
}