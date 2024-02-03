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
#define MAX_VERTICAl_HEIGHT 50
#define MAX_WORDS_LIMIT 1000
char *word=(char *)malloc(100);



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
int main(int argc,char *argv[])
{ int word_len,i,j;
  int words_len_arr[MAX_WORDS_LIMIT]={0};
  int nwords=0;
    while(word_len=strlen( getword()))
      words_len_arr[nwords++]=word_len;
    
   for(j=1;j<=MAX_VERTICAl_HEIGHT;j++){
     for(i=0;i<nwords;i++)
        if(j<=MAX_VERTICAl_HEIGHT-words_len_arr[i])
           printf("  ");
       else
           printf("* ");
     printf("\n");
   }
  free(word);
  getch();
  return 0;
}
