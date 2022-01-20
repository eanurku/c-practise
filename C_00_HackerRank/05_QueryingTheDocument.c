/*
 * 05_QueryingTheDocument.c
 *
 *  Created on: Jan 20, 2022
 *      Author: anura
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5
char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {

    return document[n-1][m-1][k-1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) {

  return document[m-1][k-1];

}

char*** kth_paragraph(char**** document, int k) {

  return document[k-1];
}

char* getWord(char** textRef){

    char* word=NULL;
    char c;
    int charCount=0;
    while(**textRef!='\0'){
        if(**textRef==' '||**textRef=='.') break;
        charCount++;
        if(word==NULL)
            word=(char*)malloc(sizeof(char)*charCount);

        else{
            word=(char*)realloc(word,sizeof(char)*charCount);
        }
        word[charCount-1]=**textRef;
        (*textRef)++;

    }
    //printf("charCount=%d\n",charCount);
    char *tmp=(char*)malloc(sizeof(char)*(charCount+1));
    memset(tmp, '\0',charCount+1);
    memcpy(tmp,word,charCount);

  // printf("word =%s,len=%d \n",tmp,strlen(tmp));



    return tmp;
}
char** getSentence(char **textRef){

    char** sentence=NULL;
    char* word=NULL;
    int wordCount=0;
    while((word=getWord(textRef))){
        wordCount++;
        if(sentence==NULL)
            sentence=(char**)malloc(sizeof(char*)*wordCount);

        else{
            sentence=(char**)realloc(sentence,sizeof(char*)*wordCount);
        }
        sentence[wordCount-1]=word;
        if(**textRef==' '){
            (*textRef)++;
        }
        if(**textRef=='.'){
            (*textRef)++;
            break;
        }
    }

    return sentence;
}
char*** getparagraph(char **textRef){

 char*** paragraph=NULL;
 char** sentence=NULL;
 int sentCount=0;

    while((sentence=getSentence(textRef))){
        sentCount++;
        if(paragraph==NULL)
            paragraph=(char***)malloc(sizeof(char**)*sentCount);

        else{
            paragraph=(char***)realloc(paragraph,sizeof(char**)*sentCount);
        }
        paragraph[sentCount-1]=sentence;

        if(**textRef=='\n'){
            (*textRef)++;
            break;
        }
        if(feof(stdin)){
            break;
        }
    }

 return paragraph;
}
char**** get_document(char* text) {

    char**** doc=NULL;
    char*** paragraph=NULL;

    int paraCount=0;
    while((paragraph=getparagraph(&text))){
        paraCount++;
        if(doc==NULL)
            doc=(char****)malloc(sizeof(char***)*paraCount);

        else{
            doc=(char****)realloc(doc,sizeof(char***)*paraCount);
        }
        doc[paraCount-1]=paragraph;
        if(*text=='\0'){
            break;
        }
        if(feof(stdin)){
            break;
        }
    }

    return doc;
}


char* get_input_text() {
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char* word) {
    printf("%s", word);
}

void print_sentence(char** sentence) {
    int word_count;
    scanf("%d", &word_count);
    for(int i = 0; i < word_count; i++){
        printf("%s", sentence[i]);
        if( i != word_count - 1)
            printf(" ");
    }
}

void print_paragraph(char*** paragraph) {
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main()
{
    char* text = get_input_text();
    char**** document = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        }

        else if (type == 2){
            int k, m;
            scanf("%d %d", &k, &m);
            char** sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        }

        else{
            int k;
            scanf("%d", &k);
            char*** paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    }
}
/*
A document is represented as a collection paragraphs, a paragraph is represented as a collection of sentences, a sentence is represented as a collection of words and a word is represented as a collection of lower-case ([a-z]) and upper-case ([A-Z]) English characters.

You will convert a raw text document into its component paragraphs, sentences and words. To test your results, queries will ask you to return a specific paragraph, sentence or word as described below.

Alicia is studying the C programming language at the University of Dunkirk and she represents the words, sentences, paragraphs, and documents using pointers:

A word is described by .
A sentence is described by . The words in the sentence are separated by one space (" "). The last word does not end with a space(" ").
A paragraph is described by . The sentences in the paragraph are separated by one period (".").
A document is described by . The paragraphs in the document are separated by one newline("\n"). The last paragraph does not end with a newline.
For example:

Learning C is fun.
Learning pointers is more fun.It is good to have pointers.

The only sentence in the first paragraph could be represented as:
char** first_sentence_in_first_paragraph = {"Learning", "C", "is", "fun"};
The first paragraph itself could be represented as:
char*** first_paragraph = {{"Learning", "C", "is", "fun"}};
The first sentence in the second paragraph could be represented as:
char** first_sentence_in_second_paragraph = {"Learning", "pointers", "is", "more", "fun"};
The second sentence in the second paragraph could be represented as:
char** second_sentence_in_second_paragraph = {"It", "is", "good", "to", "have", "pointers"};
The second paragraph could be represented as:
char*** second_paragraph = {{"Learning", "pointers", "is", "more", "fun"}, {"It", "is", "good", "to", "have", "pointers"}};
Finally, the document could be represented as:
char**** document = {{{"Learning", "C", "is", "fun"}}, {{"Learning", "pointers", "is", "more", "fun"}, {"It", "is", "good", "to", "have", "pointers"}}};
Alicia has sent a document to her friend Teodora as a string of characters, i.e. represented by  not . Help her convert the document to  form by completing the following functions:

 to return the document represented by .
 to return the  paragraph.
 to return the  sentence in the  paragraph.
 to return the  word in the  sentence of the  paragraph.
Input Format

The first line contains the integer .
Each of the next  lines contains a paragraph as a single string.
The next line contains the integer , the number of queries.
Each of the next  lines or groups of lines contains a query in one of the following formats:

1 The first line contains :

The next line contains an integer , the number of sentences in the  paragraph.
Each of the next  lines contains an integer , the number of words in the  sentence.
This query corresponds to calling the function .
2 The first line contains :

The next line contains an integer , the number of words in the  sentence of the  paragraph.
This query corresponds to calling the function
3 The only line contains :

This query corresponds to calling the function
Constraints

The text which is passed to the  has words separated by a space (" "), sentences separated by a period (".") and paragraphs separated by a newline("\n").
The last word in a sentence does not end with a space.
The last paragraph does not end with a newline.
The words contain only upper-case and lower-case English letters.
 number of characters in the entire document
 number of paragraphs in the entire document
Output Format

Print the paragraph, sentence or the word corresponding to the query to check the logic of your code.

Sample Input 0

2
Learning C is fun.
Learning pointers is more fun.It is good to have pointers.
3
1 2
2
5
6
2 1 1
4
3 1 1 1
Sample Output 0

Learning pointers is more fun.It is good to have pointers.
Learning C is fun
Learning
 */
