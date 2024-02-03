#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>

#include"../library/showbits.c"

void add_zero_to_left(char s[],int n_zero)
{  char tmp[100];
    int i=0;

    strcpy(tmp,s);
    for( i=0;i<n_zero;i++)
      s[i]='0';
    s[i]='\0';
    strcat(s,tmp);

}
void int_to_binary(int number,char s[])
{ int i,r=0;
    for(i=32;i>0;i--)
    {r=(number & (1<<(i-1)) )?1:0 ;
     s[32-i]=r+'0';}

    s[32-i]='\0';


}
void  int_to_octal(int number,char s[])
{    int i,j,t;
     char tmp[100];
     int_to_binary(number,s);
     add_zero_to_left(s,1);


     i=0;j=0;
     tmp[0]='O';
     j++;
     while(i<33)
     {
        t= (s[i]-'0')*4+(s[i+1]-'0')*2+(s[i+2]-'0');
        tmp[j++]=t+'0';

        i+=3;
     }
     tmp[j]='\0';
     strcpy(s,tmp);



}
void  int_to_hexadecimal(int number,char s[])
{   int i,j,t;
    char tmp[100];
     int_to_binary(number,s);

     i=0;j=0;
     tmp[0]='O';
     tmp[1]='X';
     j+=2;
     while(i<32)
     { t= (s[i]-'0')*8+(s[i+1]-'0')*4+(s[i+2]-'0')*2+(s[i+3]-'0');

       if(t<=9 && t>=0)
         tmp[j++]=t+'0';
       else
       {
         switch(t)
        {
         case 10:tmp[j]='A';break;
         case 11:tmp[j]='B';break;
         case 12:tmp[j]='C';break;
         case 13:tmp[j]='D';break;
         case 14:tmp[j]='E';break;
         case 15:tmp[j]='F';break;
        }
         j++;
       }
       i+=4;
     }
     tmp[j]='\0';
     strcpy(s,tmp);


}

void itob(int number,int base,char s[])
{
    switch(base)
    {
        case 2 : int_to_binary(number,s);break;
        case 8 : int_to_octal(number,s);break;
        case 16: int_to_hexadecimal(number,s);break;

    }

}
int main() {
char s[100];

showbits(-32768);
printf("\n");

itob(-32768,2,s);

 printf("\n%s",s);



getchar();
return 0;
}

