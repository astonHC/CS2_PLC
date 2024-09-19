/* COPYRIGHT (C) HARRY CLARK 2024 */

/* CS2_PLC DEMONSTRATIONS */

/* THIS FILE PERTAINS TOWARDS THE FUNCTIONALITY OF GETTING USER INPUT */
/* AND PASSING THROUGH A CONDITION TO DECLARE AS TRUE OR FALSE */

/* SYSTEM INCLUDES */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define         MAX_INPUT_BUFFER          100

/* RELEVANT AGRS PROVIDED ACROSS THE PROGRAM */

typedef struct ARGS
{
    unsigned char INPUT[MAX_INPUT_BUFFER];
    unsigned int RESULT;
    unsigned char RESULT_CHECK;

} ARGS;

/* GETS USER INPUT BASED ON DECIMAL VARIATION */
/* PARSE THE CONTENTS AND PRINT OUT A TYPE CASTED VARIANT OF THE PROVIDED OUTPUT */ 

int GET_VALUE(void)
{
    struct ARGS* ARGS = malloc(sizeof(struct ARGS));

    if(ARGS->RESULT_CHECK == 0)
    {
        fprintf(stderr, "Could not evaluate User Input\n");
        return 1;
    }

    fprintf(stdout, "Input a value\n");
    fgets((char*)ARGS->INPUT, MAX_INPUT_BUFFER, stdin);

    /* READ THE CORRESPONDING INFORMATION PROVIDED BY THE USER */
    /* IF IT DOES NOT COMPLY WITH SAID CORRESPONDENCE, A FUNNY WILL APPEAR */ 
    
    if(sscanf((char*)ARGS->INPUT, "%d", &ARGS->RESULT) != 1)
    {
        fprintf(stderr, "VINE BOOM\n");
        exit(1);
    }
    
    
    fprintf(stdout, "You entered: %d\n", ARGS->RESULT);

    return ARGS->RESULT;
    free(ARGS);

}

/* FROM THERE, THE MODULARISED FUNCTION WILL READ THE PROVIDED INT EXPRESSION */
/* AND TYPE CAST IT ACCORDINGLY */

int main(void)
{
    struct ARGS* ARGS = malloc(sizeof(struct ARGS));
    scanf((char*)GET_VALUE());

    free(ARGS);
    return 0;
}
