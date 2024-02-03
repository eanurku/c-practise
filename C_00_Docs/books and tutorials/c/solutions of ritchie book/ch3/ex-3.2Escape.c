#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>

int escape(char s[],char t[])
{ int i=0,j=0;

    while(*(t+i)!='\0')
    {  switch(*(t+i))
       {
         case '\t':*(s+j)='\\';j++;*(s+j)='t';break;
         case '\n':*(s+j)='\\';j++;*(s+j)='n';break;
         default:
            *(s+j)=*(t+i);
       }

       i++;j++;
    }
    *(s+j)='\0';
}
int found_escape(char *t,int i)
{
    if( *(t+i)=='\\' && *(t+i+1)== 'n')
      return '\n';
    else if( *(t+i)=='\\' && *(t+i+1)=='t')
       return '\t';
    else 
    return 0;
     
      
}

int real(char *s,char *t)
{   int n,i,j,c;
    n=strlen(t);
    
    for(i=0,j=0 ;i<n ;i++)
    {  if(c=found_escape(t,i))
       { i+=1;
        *(s+j++)=c;
       }
       else 
        *(s+j++)=*(t+i);
    }
     *(s+j)=0;
     
}

int main() {

char s[100];
char t[50];
char r_visible[100];
int c,n;

n=0;
while((c=getchar())!=EOF)// string t have  ' ','\n','\t' etc.
{  *(t+n)=c;
    n++;

}
*(t+n)='\0';

escape(s,t);
printf("\n%s",s);
real(r_visible,s);//convert  visible \n,\t to invisible form
 printf("\n%s",r_visible);   

getchar();
return 0;
}

