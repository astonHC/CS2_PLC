/* COPYRIGHT (C) HARRY CLARK 2024 */

/* CS2_PLC DEMONSTRATIONS */

/* THIS FILE PERTAINS TOWARDS THE FUNCTIONALITY OF DISCERNING THE TOTAL */
/* WHEN TWO INTEGERS ARE ADDED */

/* NESTED INCLUDES */

#include "util.h"

static int INDEX_TOTAL(char OPERATION)
{   
    int RESULT = (OPERATION == 'M') ? 1 : 0;

    for (int INDEX = 0; INDEX <= 10; INDEX++)
    {
        switch (OPERATION)
        {
            case 'A':
                RESULT = ADD(RESULT, INDEX);
                break;

            case 'M':
                RESULT = MULTIPLY(RESULT, INDEX);
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
