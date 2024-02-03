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
int main(int argc,char *argv[])
{ int word_len,i,j;
  int words_len_arr[1000]={0};
  int nwords=0;
  
  char *word=(char *)malloc(MAX_WORD_LENGTH);
  
    while(word_len=strlen( word=getword())){
      printf("%s\n",word);
     
     }
   
  free(word);
  getch();
  return 0;
}
