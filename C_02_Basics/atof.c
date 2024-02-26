/*
 ============================================================================
 Name        : example3.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


double _atof(char *string){


double number=0,power;
int i;

for(i=0;isdigit(string[i])&& string[i]!='\0';i++){

  number=10*number+(string[i]-'0');
}
if(string[i]=='.'){
	i++;
}
for(power=1;isdigit(string[i])&& string[i]!='\0';i++){

	number=10*number+(string[i]-'0');
	power=10*power;
}

	return number/power;
}

int main(void) {

char * string="123.435608";

printf("number=%lf",_atof(string));



	return EXIT_SUCCESS;
}
