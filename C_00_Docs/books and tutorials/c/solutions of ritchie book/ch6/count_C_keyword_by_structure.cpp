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
#define NKEYS 2
struct key{
       char *word;
       int count;
       };

char *word=(char *)malloc(MAX_WORD_LENGTH);



char * getword()

{    int c,size=0;
     static int status=OUT;
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
     
    
     return word;
}

int binary_search(char *element,struct key element_list[],int size)
{
    int start=0,end=size-1,middle;
    while(start<=end) {

       middle=(start+end)/2;

       if(strcmp(element,element_list[middle].word)<0)
                    end=middle-1;
       else if(strcmp(element,element_list[middle].word)>0)
                    start=middle+1;
       else
                    return middle+1; // 1 for match and 0 for mismatch 

    }
    return 0;   // no match found
}
int main(int argc,char *argv[])
{
  int word_len,i,j,n;
  int words_len_arr[1000]={0};
  int nwords=0;
  char *word=(char *)malloc(MAX_WORD_LENGTH);
  
  struct key keywords[NKEYS]={ {"int",0},
                               {"char",0}
                              };
  
    while(word_len=strlen( word=getword()))
      
       if(n=binary_search(word,keywords,NKEYS)>0)
          keywords[--n].count++;
          
    for(i=0;i<NKEYS;i++)
    if(keywords[i].count)
       printf("%s=%d\n",keywords[i].word,keywords[i].count);
  free(word);
  getch();
  return 0;


  getch();
  return 0;
}
