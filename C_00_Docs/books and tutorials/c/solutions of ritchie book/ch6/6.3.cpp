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
struct node{
       char *word;
       int count;
       struct node *left;
       struct node *right;
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
struct node *add_binary_tree(struct node *ptr,char *word)
{    int cond;

     if(ptr==NULL)
     { 
            ptr=(struct node *)malloc(sizeof(struct node));
            
            ptr->word=(char *)malloc(strlen(word)+1);
            strcpy(ptr->word,word);
            ptr->count=1;
            ptr->left=ptr->right=NULL;
     }
     else if((cond=strcmp(word,ptr->word))==0)
             ptr->count++;
     else if(cond<0)
             ptr->left=add_binary_tree(ptr->left,word);
     else if(cond>0)
             ptr->right=add_binary_tree(ptr->right,word);
     
     return ptr; 
}

char *line=(char *)malloc(MAX_LINE_SIZE);

char *getline(void)
{  int c,len=0;
     *line='\0';
     while( len < MAX_LINE_SIZE-1 && ((c=getchar())!=EOF)&& c!='\n'){
           *(line+len++)=c;
     
     }
     if(c=='\n')   
           *(line+len++)=c;
     
           
     *(line+len++)='\0';
      return line;
 }
 
 int search_word_in_line(char *line,char *word)
 {    
      
    int c,size;
    int status;
    char *tmp_word=(char *)malloc(MAX_WORD_LENGTH);
    
    
    while((c = *line) && c!='\n'){
                         
     size=0;status=OUT;*tmp_word='\0';
     
     while((c = *line) && c!='\n'){
      
      
      if(c ==' '||c =='\t'){                         
        if(status==IN){
          *(tmp_word+size)='\0';
          status=OUT;
          break;
        }
      }
      else {
        *(tmp_word+size)=c;
        size++;
        status=IN;
        
      }   
      line++;          
    }
    
   if((*line=='\0' || *line=='\n' )&& size>0)
     {  *(tmp_word+size)='\0';
     
     }
      printf("tmp word=%s\n",tmp_word);
   
    if(!strcmp(tmp_word,word))
       return 1;
     
   }
    return 0; 
 }
void traverse_binary_tree(struct node *ptr)
{    
     char *line=(char *)malloc(MAX_LINE_SIZE);
     int line_number=0;
     if(ptr!=NULL)
      {  
        traverse_binary_tree(ptr->left);
        
        printf("\n\nword=%s lines=",ptr->word);
        fseek(stdin,0,SEEK_SET);
        while(strlen(line=getline()))
        {      line_number++;
             if(search_word_in_line(line,ptr->word))
                 printf("%d ",line_number);
        }
        printf("\n");
        traverse_binary_tree(ptr->right);         
      }
}
int main(int argc,char *argv[])
{
int word_len,i,j;
  int words_len_arr[1000]={0};
  int nwords=0;
  char *word=(char *)malloc(MAX_WORD_LENGTH);
   
   struct node *root=NULL;
   
    while(word_len=strlen( word=getword()))  
          
          root = add_binary_tree(root,word);
    
    printf("\n\n"); 
   
    traverse_binary_tree(root);
      
  free(word);
  

  
  return 0;
}
