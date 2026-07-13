#include<stdio.h>
void main()
{
    char str[20],ch;
    int n;
    printf("\n Enter the string: ");
    scanf("%s",str);
    int cho;
    for(n=0;n<20;n++)
        if(str[n]=='\0')
            break;
    printf("\n the number of character present: %d \n",n);
    do
    {
        printf("\n---------------------choose any one option-----------------------\n");
        printf("\n 1.to search a character and report its position. \n");
        printf("\n 2.to find the character at the specified position. \n");
        printf("\n 3.to display the number of occurences of the character. \n");
        printf("\n 4.to check palindrome word or not. \n");
        printf("\n 5.to exit \n");
        printf("\n Enter the choice: ");
        scanf("%d",&cho);
        int i,c=0;
        printf("\n------------------------------------------------------------------\n");
        switch(cho)
        {
         case 1:
            printf("\n Enter the charcter to be searched: ");
            scanf(" %c",&ch);
            for(i=0;i<n;i++)
               if(ch==str[i])
                   printf("\n %c is at %d position. \n",ch,i);
            break;
         case 2:
            printf("\n Enter the position of the charcater to be found: ");
            scanf("%d",&i);
            printf("\n At the position %d , %c is present. \n",i,str[i]);
            break;
         case 3:
            printf("\n Enter the character to find the number of occurences: ");
            scanf(" %c",&ch);
            for(i=0;i<n;i++)
                if(str[i]==ch)
                    c++;
            printf("\n The number of occurences of %c is %d times. \n",ch,c);
            break;
         case 4:
            for(i=0;i<n;i++)
                if(str[i]==str[n-1-i])
                    c++;
            if(c==n)
                printf("\n palindrome word \n");
            else
                printf("\n not a palindrome word \n");
            break;
         case 5:
            printf(" \n . . . E X I T . . . \n");
            break;
         default:
            printf("\n Enter a proper choice. \n");
    }
    }while(cho!=5);
}
