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

struct node{
       char *word;
       int count;
       struct node *next;
       struct node *left;
       struct node *right;
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
void print_binary_tree(struct node *ptr)
{  
     if(ptr!=NULL)
      {  
        print_binary_tree(ptr->left);
        printf("%s=%d\n",ptr->word,ptr->count);
        print_binary_tree(ptr->right);         
      }
}


struct node * add_to_freq_sorted_tree(struct node *ptr,struct node *root)
{    

     if(root==NULL){
     
            root=(struct node *)malloc(sizeof(struct node));
            
            root->word=(char *)malloc(strlen(ptr->word)+1);
            strcpy(root->word,ptr->word);
            root->count=ptr->count;
            root->left=root->right=NULL;
            return root;
            
     }  
     else if(ptr->count <= root->count)
             root->left=add_to_freq_sorted_tree(ptr,root->left);
     else if(ptr->count > root->count)
             root->right=add_to_freq_sorted_tree(ptr,root->right);
     
     
     return root;
     
     
 }
struct node * traverse_binary_tree(struct node *ptr,struct node *root)
{  
     if(ptr!=NULL)
      {  
        root=traverse_binary_tree(ptr->left,root);
        root=add_to_freq_sorted_tree(ptr,root);
        
        
        
        root=traverse_binary_tree(ptr->right,root);         
      }
      return root;
}


int main(int argc,char *argv[])
{
int word_len,i,j;
  int words_len_arr[1000]={0};
  int nwords=0;
  char *word=(char *)malloc(MAX_WORD_LENGTH);
   
   struct node *root=NULL;
    struct node *new_root=NULL;
   
    while(word_len=strlen( word=getword()))  
          
          root = add_binary_tree(root,word);
    
    
    
    
    
    
    new_root=traverse_binary_tree(root,new_root);//inc order
    
    
    print_binary_tree(new_root);
    
    
     
  free(word);
  

  getch();
  return 0;
}
