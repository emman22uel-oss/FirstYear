#include <stdio.h>
int mat_I[3][3]={1,0,0,0,1,0,0,0,1},mat_A[3][3],mat_B[3][3];
void matrix(char mat)
{
    int i,j;
    printf("\n Enter the elements of matrix '%c' \n",mat);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            if(mat=='A')
               scanf("%d",&mat_A[i][j]);
            else if(mat=='B')
               scanf("%d",&mat_B[i][j]);
        }
}
void main()
{
    matrix('A');
    matrix('B');
    int i,j,k,sop=0,c=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            sop=sop+(mat_A[i][k]*mat_B[k][j]);
            if(sop==mat_I[i][j])
                c++;
            sop=0;
        }
        printf("\n");
    }
    if(c==9)
        printf("The matrix B is a inverse of matrix A.");
    else
        printf("The matrix B is not a inverse of matrix A.");
}
