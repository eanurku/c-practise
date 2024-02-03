/*
 ============================================================================
 Name        : C_32_ScanfConversions.c
 Author      : anurag
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	int day;
//	int year;
//	char monthName[10]={'\0'};
//	scanf("%d %s %d",&day,monthName,&year);
//	printf("%d %s %d",day,monthName,year);

//		int day;
//		int year;
//		int month;
//		scanf("%d/%d/%d",&day,&month,&year);
//		printf("%d %d %d",day,month,year);

    char str[100];
    gets(str);
    printf("%s",str);


	return EXIT_SUCCESS;
}
