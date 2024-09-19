## COPYRIGHT (C) HARRY CLARK 2024

## STUDENT NO. 230315257

## CS2_PLC DEMONSTRATIONS

## THIS MAKEFILE IS PRETTY INTERCHANGEABLE, GIVEN IT'S SIMPLE STRUCTURE
## THE ONLY TIME THIS MIGHT BECOME A BIT MORE VERBOSE IS WHEN IT COMES TO
## MODULARISING PROGRAMS WITH HEADER FILES

#########################################################################
##				PREFIXES			       ##
#########################################################################

CC					=			$(PREFIX)gcc
AR					=			$(PREFIX)ar
WARNINGS			=			-std=c99 -Wall -Wextra -Werror
SRC					=			./

#########################################################################
##				FILE ACCESS			       ##
#########################################################################

LAB_3_FILES			=			$(wildcard $(SRC)/*.c)
LAB_3_OBJS			=			$(LAB_3_FILES:$(SRC)/%.c=$(SRC)/%.o)

#########################################################################
##			    TARGET LINKING			       ##
#########################################################################

TARGET				=			lab3.exe

all: $(TARGET)

$(TARGET): $(LAB_3_OBJS)
	$(CC) $(LAB_3_OBJS) -o $@

$(SRC)/%.o: $(SRC)/%.c
	$(CC) $(WARNINGS) -c $< -o $@

#########################################################################
##				CLEANUP 			       ##
#########################################################################

clean:
	rm -f $(SRC)/*.o $(TARGET)
	
.PHONY: clean