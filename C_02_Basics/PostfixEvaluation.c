/*
 ============================================================================
 Name        : exapmle4.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
#define NUMBER '1'
int stack[MAX_SIZE+1];
int top=-1;

void push(int number ){

	if(top==MAX_SIZE-1){
		printf("stack full");
	}
	else {

		stack[++top]=number;
	}

}

int pop(){

	int x;
if(top==-1){
	printf("stack empty");
	return -1;
}
else{
	x=stack[top];
	top--;
	return x;
}

}

char getoperandORoperator(char *string){

	int i;
	char character;
	while(((character=getchar())==' ')||character=='/n');

	if(!isdigit(character)){
		return character;
	}
	i=0;
	while(isdigit(character)){
            string[i++]=character;
            character=getchar();
	}
    string[i]='\0';

    return NUMBER;


}
int main(void) {


	int operand1,operand2;
	char type;
    char string[20];
	while ((type = getoperandORoperator(string)) != EOF) {

		switch (type) {
		case NUMBER:
			push(atoi(string));

			break;
		case '+':
			operand1 = pop();
			operand2 = pop();
			push(operand1 + operand2);
			break;

		case '-':
			operand1 = pop();
			operand2 = pop();
			push(operand2 - operand1);
			break;
		case '*':
			operand1 = pop();
			operand2 = pop();
			push(operand1 * operand2);
			break;

		}

		//string[0]='\0';
	}

	printf("result=%d",pop());





	return EXIT_SUCCESS;
}
