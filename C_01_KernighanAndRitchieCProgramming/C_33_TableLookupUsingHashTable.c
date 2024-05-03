
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

struct Node{
	struct Node *next;
	char *name;
	char *defn;
};

struct Node *hashTable[SIZE];



int getHash(char *name){

	unsigned int hash=1;
	for (; *name !='\0'; ++name) {

		hash=31*hash+*name;

	}

	return hash%SIZE;
}

void print(struct Node *ptr){



	while(ptr!=NULL){

		printf("%s - %s, ",ptr->name,ptr->defn);
		ptr=ptr->next;
	}

}

struct Node *lookup(char *name){

	struct Node *ptr=hashTable[getHash(name)];


	while(ptr !=NULL){

		if(strcmp(ptr->name,name)==0){

			return ptr;
		}
		ptr=ptr->next;
	}

	return NULL;

}

void install(char *name,char *defn){


	int hashValue=getHash(name);

	struct Node *nodePtr;
	if((nodePtr=lookup(name))==NULL){
		struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
		ptr->name=(char *)malloc(sizeof(strlen(name))+1);
		ptr->defn=(char *)malloc(sizeof(strlen(defn))+1);
		strcpy(ptr->name,name);
		strcpy(ptr->defn,defn);

		ptr->next=hashTable[hashValue];
		hashTable[hashValue]=ptr;


	}else{
		strcpy(nodePtr->defn,defn);

	}
}
int main(void){




	char name[100];
	char defn[100];


	for (int i = 0; i < SIZE; ++i) {
		hashTable[i]=NULL;
	}


	int n;
	scanf("%d",&n);
	for (int var = 0; var < n; ++var) {
		scanf("%s%s",name,defn);

		install(name,defn);
	}


	for (int i = 0; i < SIZE; ++i) {
		if(hashTable[i]!=NULL){
			print(hashTable[i]);
			printf("\n");
		}
	}






	return 0;
}
