//program by 25bee036 Emmanuel M.V. Isaac
#include <stdio.h>
#include <time.h>
long long factorial_recursive(int n)
{
    if (n <= 1) return 1;
    return n*factorial_recursive(n-1);
}
long long factorial_iterative(int n)
{
    long long result=1;
    for (int i=1;i<=n;i++)
        result*=i;
    return result;
}
void main()
{
    printf("program by 25bee036 \n \n");
    int n;
    printf("Enter an integer n: ");
    scanf("%d",&n);
    clock_t start_rec=clock();
    long long res_rec=factorial_recursive(n);
    clock_t end_rec=clock();
    double time_rec=(double)(end_rec - start_rec)/CLOCKS_PER_SEC;
    clock_t start_iter=clock();
    long long res_iter=factorial_iterative(n);
    clock_t end_iter=clock();
    double time_iter=(double)(end_iter-start_iter)/CLOCKS_PER_SEC;
    printf("Recursive Result: %ld | Time: %f s\n", res_rec,time_rec);
    printf("Iterative Result: %ld | Time: %f s\n", res_iter,time_iter);
}
