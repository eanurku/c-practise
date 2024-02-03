#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>
#include "../library/showbits.c"
void add_space_to_left(char str[],int n_spaces)
{  char tmp[100];
    int i=0;

    strcpy(tmp,str);
    for( i=0;i<n_spaces;i++)
      str[i]=' ';
    str[i]='\0';
    strcat(str,tmp);

}
void reverse(char s[])
{   int i=0,t=0,n;
    n=strlen(s);

    for(i=0;i<n/2;i++)
      t=s[i],s[i]=s[n-i-1],s[n-i-1]=t;



}
void add(char *str,short int x)//x<9
{    int carry,j;
       j=strlen(str)-1;
       carry=(str[j]-'0'+x)/10;
       str[j]='0'+(str[j]-'0'+x)%10;
       
       if(carry)
         j--;
     while(carry &&j>=0){
         str[j]='0'+(str[j]-'0'+carry)%10;
         carry=(str[j]-'0'+carry)/10;        
         j--;
     }
}
void __itoa(int number,char str[],int min_field_width)
{  char sign='+';
   int n,rev=0,i=0,n_spaces;
     n=number;
    
    if(number<0)
     {   
       sign='-';
       if (!(number & ~(1<<31)))
       { 
            n=~number;
       }
        else
         n=-number;
       
        
     }
       
    while(n)
    { str[i]=n%10+'0';
       i++;
       n=n/10;
    }
                
    if(!(number & ~(1<<31)))   
    {  
       str[i]='\0';
       printf("str=%s\n",str);
       reverse(str);
       printf("str=%s\n",str);
       add(str,1);
          printf("str=%s\n",str);
       reverse(str);
                
    }
    
    
    if(sign=='-')
     str[i++]='-';

    

    str[i]='\0';
    reverse(str);

    n_spaces=min_field_width-strlen(str);
    add_space_to_left(str,n_spaces);


}
int main() {    
char str[111];
__itoa(-2147483648,str,20); 

 printf("12345678912345678912\n");//20 is field width
 printf("%s",str);
getchar();
return 0;
}

