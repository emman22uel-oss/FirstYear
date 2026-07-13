#include <stdio.h>
#include <stdlib.h>
#define s 100
void main()
{
    char str[s];
    int num[s];
    char op[s];
    int nc=0,sc=0;
    printf("Enter expression: ");
    scanf("%[^\n]",str);
    char *p=str;
    while (*p!='\0')
    {
        if (*p>='0'&&*p<='9')
            num[nc++] = (int)strtol(p, &p, 10);
        else
        {
            op[sc++]=*p;
            p++;
        }
    }
    for (int i=0;i<sc;i++)
    {
        if (op[i]=='*'||op[i]=='/')
        {
            if (op[i]=='*')
                num[i]=num[i]*num[i+1];
            else
             {
                if(num[i+1]==0)
                {
                    printf("Error: Division by zero\n");
                    break;
                }
                num[i]=num[i]/num[i+1];
             }
            for (int j=i+1;j<nc-1;j++)
                num[j]=num[j+1];
            for (int j=i;j<sc-1;j++)
                op[j]=op[j+1];
            nc--;
            sc--;
            i--;
        }
    }
    int total=(nc>0)?num[0]:0;
    for (int i=0;i<sc;i++)
    {
        if(op[i]=='+')
           total+=num[i+1];
        else if(op[i]=='-')
           total-=num[i+1];
    }
    printf("Result: %d\n",total);
}
