#include <stdio.h>
int big=0;
int biggest(int arr[],int i)
{
    if(i==9)
        return big;
    else if(arr[i]>big)
        big=arr[i];
    return biggest(arr,i+1);
}
void main()
{
    int list[10],i;
    printf("Enter the elements: ");
    for(i=0;i<10;i++)
        scanf("%d",&list[i]);
    biggest(list,0);
    printf("The biggest number in the array is the : %d",big);
}
