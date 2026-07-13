#include <stdio.h>
#include <string.h>
void main()
{
    char word[50];
    printf("\n Enter the word: ");
    scanf("%s",word);
    int cho,i,alp=0,sp=0,num=0,ch;
    do
    {
       printf("\n 1.to find the length of the string. ");
       printf("\n 2.to reverse the string.");
       printf("\n 3.to count the number of alphabets, numerals and special characters. ");
       printf("\n 4.to exit.");

       printf("\n Enter the choice: ");
       scanf("%d",&cho);
       printf("\n-------------------------------------------------------------");
       switch(cho)
       {
       case 1:
        printf("\n The length of the string: %d",strlen(word));
        break;
       case 2:
        printf("\n The reversed string: %s",strrev(word));
        break;
       case 3:
        for(i=0;i<strlen(word);i++)
        {
            ch=(int)word[i];
            if (ch>=48&&ch<=57)
                num++;
            else if ((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
                alp++;
            else
                sp++;
        }
        printf("\n The number of alphabets: %d",alp);
        printf("\n The number of numerals: %d",num);
        printf("\n The number of special characters: %d",sp);
        break;
       case 4:
        printf("\n . . . . . E X I T . . . . . ");
        break;
       default:
        printf("Enter the valid choice");
       }
    printf("\n-------------------------------------------------------------");
    }
    while(cho!=4);
}
