#include <stdio.h>
int n;
struct employee
{
    int emp_no,age;
    char add[50];
};
void read(int I,struct employee data[])
{
    printf("\n Enter the employee no: ");
    scanf("%d",&data[I].emp_no);
    printf(" Enter the age: ");
    scanf("%d",&data[I].age);
    printf(" Enter the address: ");
    scanf(" %s",data[I].add);
}
void sort(struct employee data[])
{
    int i,j;
    struct employee x;
    for(i=1;i<=n;i++)
        for(j=i;j<=n;j++)
            if(data[i].age>data[j].age)
              {
                  x=data[j];
                  data[j]=data[i];
                  data[i]=x;
              }
     printf("\n The sorted list:\n");
     for(i=1;i<=n;i++)
     {
         printf(" Employee no: %d\n",data[i].emp_no);
         printf(" Age: %d\n",data[i].age);
         printf(" Address: %s\n",data[i].add);
     }
}
void main()
{
    printf("\n Enter the number of employees: ");
    int i;
    scanf("%d",&n);
    struct employee em[n];
    for(i<=1;i<=n;i++)
    {
        printf("\n Enter the details of the employee no %d",i);
        read(i,em);
    }
    sort(em);
}
