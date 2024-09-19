/* COPYRIGHT (C) HARRY CLARK 2024 */

/* CS2_PLC DEMONSTRATIONS */

/* THIS FILE PERTAINS TOWARDS THE FUNCTIONALITY OF DISCERNING THE TOTAL */
/* WHEN TWO INTEGERS ARE ADDED */

/* NESTED INCLUDES */

#include "util.h"

/* INDEX WHAT THE SUM OF THE OPERTATION WILL BE BASED ON CHAR LITERAL */
/* COULDN'T QUITE FIGURE OUT HOW TO MAKE IT MORE MODULAR */ 

static int INDEX_TOTAL(char OPERATION)
{   
    int RESULT = 0;

    for (int INDEX = 0; INDEX <= 10; INDEX++)
    {
        switch (OPERATION)
        {
            case 'A':
                RESULT = ADD(RESULT, INDEX);
                break;

            case 'M':
                RESULT = MULTIPLY(INDEX, RESULT);
                break;

            case 'S':
                RESULT = SUBTRACT(RESULT, INDEX);
                break;

            case 'D':
                RESULT = DIVIDE(RESULT, INDEX);
                break;
        
            default:
                fprintf(stderr, "Invalid Operation\n");
                exit(1);
        }
    }

    return RESULT;
}

/* SCAN FOR RELEVANT INPUT PROVIDED BY THE USER AND DISCERN THAT BASED ON CHAR LITERAL */

static char FIND_TOTAL(void)
{
    char OP;

    fprintf(stdout, "Choose an Operator, (A, M, S, D)\n");
    scanf("%c", &OP);

    return INDEX_TOTAL(OP);
}

int main(void)
{
    printf("The total is: %d\n", FIND_TOTAL());
    return 0;
}
