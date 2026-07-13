//program by 25bee036 Emmanuel M.V. Isaac.
#include <stdio.h>
#include <string.h>
void main()
{
    printf("program by 25bee036 \n \n");
    char in[1000],words[100][50],tmp[50];
    int count[100]={0},n=0,i,j,f;
    char *t;
    printf("Enter paragraph: ");
    scanf("%[^\n]s",in);
    t=strtok(in," \t");
    while(t)
    {
        for(i=0,j=0;t[i];i++)
        {
            char c=t[i];
            if(c>='A'&&c<='Z')
                c+=32;
            if(c>='a'&&c<='z')
                tmp[j++]=c;
        }
        tmp[j]='\0';
        if(j>0)
        {
            f=0;
            for(i=0;i<n;i++)
                if(!strcmp(words[i],tmp))
                {
                    count[i]++;
                    f=1;
                    break;
                }
            if(!f&&n<100)
            {
                strcpy(words[n],tmp);
                count[n++]=1;
            }
        }
        t=strtok(NULL," \t");
    }
    for(i=0;i<n;i++)
        printf("%s: %d\n",words[i],count[i]);
}
