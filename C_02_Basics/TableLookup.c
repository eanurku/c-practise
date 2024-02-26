/*
 ============================================================================
 Name        : example11.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define IN  1
#define OUT 0
#define GAP 5
#define MAX_HASH_SIZE 10
#define MAX_WORD_LENGTH 100

char * getword(char *word)

{    int c,size=0;
     int status=OUT;
     *word='\0';

     while((c=getchar())!=EOF){
      if(c ==' '||c =='\t'||c =='\n'){
        if(status==IN){
          *(word+size)='\0';
          status=OUT;
          break;
        }
      }
      else {
        *(word+size)=c;
        size++;
        status=IN;

      }

    }

    if(c==EOF && size>0)
      *(word+size)='\0';
    //printf("word=%d\n",strlen(word));
     return word;
}

struct node{
	char word[MAX_WORD_LENGTH];
	int wordCount;
	struct node *next;

};

unsigned int hashFunction(char *string){

unsigned int hashValue=0;
	for(;*string;string++){
		hashValue=31*hashValue+*string;
	}

	return hashValue%MAX_HASH_SIZE;
}

void addToLinklist(struct node *ptr,char *word){

	struct node *save=NULL;
	while(ptr!=NULL){
		if(strcmp(ptr->word,word)==0){
		  ptr->wordCount++;
          return;
		}
		save=ptr;
		ptr=ptr->next;
	}

	ptr = (struct node *) malloc(sizeof(struct node));
	ptr->next = NULL;
	ptr->wordCount = 1;
	strcpy(ptr->word, word);

	save->next=ptr;

}
void addToHashTable(struct node *hashArray[],unsigned int hashvalue,char *word){

	struct node *ptr=hashArray[hashvalue];

	if(ptr==NULL){
		ptr=(struct node *)malloc(sizeof(struct node));
		ptr->next=NULL;
		ptr->wordCount=1;
		strcpy(ptr->word,word);
		hashArray[hashvalue]=ptr;
	}
	else {
		addToLinklist(ptr,word);
	}
}

int main(void) {



    int i,hashValue;
    int len;
    char *word=(char *)malloc(MAX_WORD_LENGTH);

	struct node *hashArray[MAX_HASH_SIZE],*ptr;

	for(i=0;i<MAX_HASH_SIZE;i++){

		hashArray[i]=NULL;
	}

	while(len=strlen(getword(word))){

		hashValue=hashFunction(word);
		addToHashTable(hashArray,hashValue,word);


	}


	for (i = 0; i < 10; i++) {

		if ((ptr = hashArray[i]) != NULL) {

			while(ptr!=NULL){

				printf("%s,%d\n",ptr->word,ptr->wordCount);
				ptr=ptr->next;
			}
		}
	}










	return EXIT_SUCCESS;
}
