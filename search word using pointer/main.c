#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int i,f=0,n;
    printf("Enter the no of words: ");
    scanf("%d",&n);
    char **word,getword[20],find[20];
    word=(char**)malloc(n*sizeof(char*));
    for (i=0;i<n;i++)
    {
        printf("Enter the word %d: ",i);
        scanf("%s",getword);
        word[i]=malloc(n*sizeof(char*));
        strcpy(word[i],getword);
    }
    printf("Enter the word to be searched.");
    scanf("%s",find);
    for (i=0;i<n;i++)
        if(strcmp(word[i],find)==0)
        {
            printf("word found in at %d ",i+1);
            f=1;
        }
    if(f==0)
        printf("word not found.");
}
