#include<stdio.h>// Formatted console and file input/output operations
#include<conio.h>// Unformatted console i/o operations
#include<stdlib.h>//for Utility functions like malloc,random,arc & argv as  command line arguments etc.
#include<string.h>//for String functions like strlen,strcmp etc.
#include<ctype.h>// character class test/conversion functions like isalnum,tolower etc.
#include<stdarg.h>//for Variable arguments uses in function by va_list,va_start,va_arg etc.
#include<time.h>//
#include<math.h>//

/*
#include "../library/algorithms.c"
*/

#define IN  1
#define OUT 0
#define GAP 5
#define MAX_WORD_LENGTH 100
#define NKEYS (sizeof (keywords) / sizeof(keywords[0]))
#define MAX_LINE_SIZE  10000
#define HASH_SIZE 101

struct node{
       char *word;
       int count;
       struct node *left;
       struct node *right;
       struct node *next;
       };

char *word=(char *)malloc(MAX_WORD_LENGTH);

char * getword()

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

unsigned hash_function(char *word)
{   unsigned hash_value;
    for(hash_value=0 ;*word;word++)
      hash_value=*word +31*hash_value;
  return (hash_value%HASH_SIZE) ; 
}

struct node *hash_search(char *word,struct node *hash_array[])
{     struct node *ptr;
       
       for(ptr=hash_array[hash_function(word)];ptr;ptr=ptr->next)
         if(!strcmp(ptr->word,word))
            return ptr;
            
            return NULL;
}

struct node * hash_insert(char *word,struct node *hash_array[])
{
     struct node *tmp;
     if((tmp=hash_search(word,hash_array))==NULL)
     {   //add word in table
         tmp=(struct node *)( malloc(sizeof(struct node)));
         tmp->word=(char *)malloc((strlen(word)+1));
         strcpy(tmp->word,word);
         tmp->count=1;
         tmp->left=tmp->right=NULL;
         
         tmp->next=hash_array[hash_function(word)];
         hash_array[hash_function(word)]=tmp;                            
     }
     else
     {
         tmp->count++;
     }
    
     return tmp;
 }
 
void traverse_hash_table(struct node *hash_array[])
{ int i;
  struct node *ptr;
  
  for(i=0;i<HASH_SIZE;i++)     
     
   for(ptr=hash_array[i];ptr;ptr=ptr->next)  
      printf("word=%s,count=%d\n",ptr->word,ptr->count);
     
} 
int main(int argc,char *argv[])
{
int word_len,i,j;
  int words_len_arr[1000]={0};
  int nwords=0;
  char *word=(char *)malloc(MAX_WORD_LENGTH);
   
   struct node *root=NULL;
   struct node *hash_array[HASH_SIZE]={0};
   
   
    while(word_len=strlen( word=getword()))  
          root=hash_insert(word,hash_array);
    
     
     traverse_hash_table(hash_array);
     
    printf("\n\n"); 
   
    
      
  free(word);
  

  
  return 0;
}
