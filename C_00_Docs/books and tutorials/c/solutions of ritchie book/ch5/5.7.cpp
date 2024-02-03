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
#define MAX_ROWS  100
#define MAX_COLS  100
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
 
void read_input_lines(char line_ptr[][MAX_COLS],int *nlines) 
{
     char *line=(char *)malloc(MAX_LINE_SIZE);
     char *ptr;
     
     while(strlen(line=getline()))
     {  
        strcpy(line_ptr[*nlines],line);         
        (*nlines)++;
        
     }
     
     
     
}



void write_output(char line_ptr[][MAX_COLS],int *nlines)
{   int i;
     for(i=0;i<*nlines;i++)
       printf("%s",line_ptr[i]);
     
     
     
}
/* swap: interchange v[i] and v[j] */
void swap(char v[][MAX_COLS], int i, int j)
{
char *tmp=(char *)malloc(MAX_LINE_SIZE);
strcpy(tmp,v[i]);
strcpy(v[i],v[j]);
strcpy(v[j],tmp);

}

void qsort(char v[][MAX_COLS], int left, int right)
{
int i, last;
void swap(char v[][MAX_COLS], int i, int j);
if (left >= right) /* do nothing if array contains */
return; /* fewer than two elements */
swap(v, left, (left + right)/2);
last = left;
for (i = left+1; i <= right; i++)
if (strcmp(v[i], v[left]) < 0)
swap(v, ++last, i);
swap(v, left, last);
qsort(v, left, last-1);
qsort(v, last+1, right);

}

int main(int argc,char *argv[])
{ 
    char line_ptr[MAX_ROWS][MAX_COLS];
    int *nlines;
    int lines=0;
    nlines=&lines;
    
    read_input_lines(line_ptr,nlines);
    qsort(line_ptr,0,lines-1);
    write_output(line_ptr,nlines);
    
    getch();
    return 0;
}
