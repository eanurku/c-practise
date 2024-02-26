/*
 ============================================================================
 Name        : C_Puzzle6_selfProducingProgram.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

 main(void) { char *s="main(void){ char *s=%c%s%c printf(s,34,s,34);}"; printf(s,34,s,34);}
