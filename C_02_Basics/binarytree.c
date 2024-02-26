/*
 ============================================================================
 Name        : example9.c
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
	struct node *left;
	struct node *right;
};


struct node * constructTree(struct node *ptr,char *word){
int cond;
	if(ptr==NULL){
		ptr=(struct node *)malloc(sizeof(struct node));
		ptr->left=NULL;
		ptr->right=NULL;
		ptr->wordCount=1;
		strcpy(ptr->word,word);

	}
	else if((cond=strcmp(ptr->word,word))>0){
		ptr->left=constructTree(ptr->left,word);
	}
	else if(cond<0) {
		ptr->right=constructTree(ptr->right,word);
	}
	else if(cond==0){
           ptr->wordCount++;
	}

}

void traverseBinaryTree(struct node *ptr){

	if(ptr!=NULL){
		traverseBinaryTree(ptr->left);
		printf("word=%s,count=%d\n",ptr->word,ptr->wordCount);
		traverseBinaryTree(ptr->right);
	}


}
int main(void) {


   char *word=(char *)malloc(MAX_WORD_LENGTH);
   int len;

   struct node *root=NULL;


	while(len=strlen(getword(word))){


		root=constructTree(root,word);

	}


	traverseBinaryTree(root);






	return EXIT_SUCCESS;
}
