int get_line(char arr[],int lim)
{ int len=0,c;

       while(((c=getchar())!=EOF)&&(c!='\n')) {
         if(len >= lim-1)
          {   arr[len]='\0';
              return len;
          }
         arr[len]=c;
         len++;


       }
      // if(c =='\n'){
       // arr[len]=c;
      //  len++;
      // }
    arr[len]='\0';
  return len;
}
int get_line1(char *str,int length_limit)
{   int length=0,c;
    while((c=getchar())!=EOF && c!='\n'&& length <length_limit){
         str[length]=c;
         length++;
    }
    
    if(c=='\n')
     str[length++]='\n';
     
    str[length]='\0';
    
    
    return length;
}

