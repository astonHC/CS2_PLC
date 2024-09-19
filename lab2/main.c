/* COPYRIGHT (C) HARRY CLARK 2024 */

/* CS2_PLC DEMONSTRATIONS */

/* THIS FILE PERTAINS TOWARDS THE FUNCTIONALITY OF PASSING A FUNCTION AS AN ARG */
/* TO ANOTHER FUNCTION */

/* NESTED INCLUDES */ 

#include "util.h"

/* WE CAN USE A PRE-PROCESSOR DIRECTIVE IN PLACE OF THE CONVENTIONAL MEANS FOR SIMPLICITY */
/* HOWEVER, USING SUCH WILL CAUSE COMPLICATIONS IN PASSING THROUGH THE DESIGNATED FUNCTION */
/* DUE TO POINTER SIGNEDNESS */ 

static int ADD_VALUES(int X, int Y)
{
    return ADD(X, Y);
}

/* CREATE A STANDARD FUNCTION FOR PRINTING OUT THE CORRESPONDENCE */
/* OF SAID ARGUMENT */ 

static int CALCULATE_FUNCTION(int (*ARG)(int, int), int X, int Y)
{
    return ARG(X, Y);
}

int main(void)
{
    struct FUNCTION_ARGS* FUNC = malloc(sizeof(struct FUNCTION_ARGS));

    if(FUNC == NULL)
    {
        fprintf(stderr, "Could not allocate designated memory for Function Args\n");
        exit(1);
    }

    FUNC->VALUE_A = 100;
    FUNC->VALUE_B = 200;

    /* IN BEING ABLE TO PASS AN ARG THROUGH LIKE THIS */
    /* THIS OPENS THE DOOR FOR MODULARISATION OF LOGIC */ 

    int SUM = CALCULATE_FUNCTION(ADD_VALUES, FUNC->VALUE_A, FUNC->VALUE_B);
    printf("Sum: %d\n", SUM);


    free(FUNC);
    return 0;
}
