#include <stdio.h>
int extern_var=100;
static int file_static_var=50;
void demo()
{
   auto int a=0;
   register int r=0;
   static int s=0;
   extern int extern_var;
   a++;
   r++;
   s++;
   extern_var++;
   file_static_var++;
   printf("Auto:%d,Reg:%d,StaticLoc:%d,Extern:%d,FileStatic:%d\n",a,r,s,extern_var,file_static_var);
}
int main()
{
   printf("program by 25bee036 \n");
   demo();
   demo();
   return 0;
}
/*
ANALYSIS:
1. auto: Reset to 1 each call. Lifetime is function-level.
2. register: Reset to 1 each call. Advisory only; cannot take address (&r).
3. static local: Increments (1 then 2). Lifetime is program-level; persists across calls.
4. extern: Increments (101 then 102). External linkage; accesses the global definition.
5. static global: Increments (51 then 52). Internal linkage; visible only to this file.
*/
