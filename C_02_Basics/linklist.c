/*
 ============================================================================
 Name        : linklist.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

void printLinklist(struct node *headPtr){

	while(headPtr!=NULL){

		printf("%d%s",headPtr->data,headPtr->next!=NULL?"->":"");
		headPtr=headPtr->next;
	}
}
int main(void) {
	struct node *first=(struct node *)malloc(sizeof(struct node));
	struct node *second=(struct node *)malloc(sizeof(struct node));
	struct node *third=(struct node *)malloc(sizeof(struct node));
	struct node *fourth=(struct node *)malloc(sizeof(struct node));

	first->data=1;first->next=second;
	second->data=2;second->next=third;
	third->data=3;third->next=fourth;
	fourth->data=4;fourth->next=NULL;
	struct node *head=first;
	//printLinklist(head);

	struct node *ptr,*curr,*save;
	save=NULL;
	ptr=curr=head;

	while(curr!=NULL){

		curr=curr->next;
		ptr->next=save;
		save=ptr;
		ptr=curr;
	}

	head=save;
	printLinklist(head);









	return EXIT_SUCCESS;
}
