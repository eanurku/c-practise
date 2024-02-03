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

#define MAX_LINES  10000
#define MAX_LINE_SIZE  1000
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
 
void read_input_lines(char *line_ptr[],int *nlines)
{
     char *line=(char *)malloc(MAX_LINE_SIZE);
     char *ptr;
     
     while(strlen(line=getline()))
     {  ptr=(char *)malloc(strlen(line)+1);
        strcpy(ptr,line);
        line_ptr[*nlines]=ptr;
        (*nlines)++;
        
     }
}
void write_output(char *line_ptr[],int *nlines)
{   int i;
     for(i=0;i<*nlines;i++)
       printf("%s",line_ptr[i]);
     
     
     
}
/* swap: interchange v[i] and v[j] */
void swap(void *v[], int i, int j)
{
  void *temp;
  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

int numcmp(char *s,char *t)
{
    if(atoi(s)==atoi(t))
     return 0;
     else if(atoi(s)<atoi(t))
     return -1;
     else
      return 1;
}
int strcomp(char *s,char *t)
{ 
  return strcmp(s,t);
}
void qsort(void *v[], int left, int right,int (*comp)( void *,void *) )
{
  int i, last;
  //void swap(void *v[], int i, int j);
  if (left >= right) /* do nothing if array contains */
  return; /* fewer than two elements */
  swap(v, left, (left + right)/2);
  last = left;
  for (i = left+1; i <= right; i++)
  if ( comp(v[i], v[left]) < 0 )
  swap(v, ++last, i);
  swap(v, left, last);
  qsort(v, left, last-1,comp);
  qsort(v, last+1, right,comp);

}

int main(int argc,char *argv[])
{ 
    char *line_ptr[MAX_LINES];
    int *nlines;
    int lines=0;
    nlines=&lines;
    
    int number=0;
    
    read_input_lines(line_ptr,nlines);
    
    if(argc>1 && !strcmp(argv[1],"-n"))
       number=1;
    
    
    qsort((void **)line_ptr,0,lines-1,(int (*)(void * ,void *))( number>0 ? numcmp:strcomp));
    
    write_output(line_ptr,nlines);
    
    getch();
    return 0;
}
