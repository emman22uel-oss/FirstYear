//program by 25bee036 Emmanuel M.V. Isaac
#include <stdio.h>
void main()
 {
    printf(" program by 25bee036 \n");
    unsigned char uc=~0;
    unsigned short us=~0;
    unsigned int ui=~0;
    unsigned long ul=~0;
    signed char sc=uc>>1;
    signed short ss=us>>1;
    signed int si=ui>>1;
    signed long sl=ul>>1;
    printf("\n Type \t\t Size \t Min \t\t Max\n");
    printf("signed char \t %zu \t %d \t\t %d\n",sizeof(sc),(signed char)~sc,sc);
    printf("unsigned char \t %zu \t 0 \t\t %u\n",sizeof(uc),uc);
    printf("signed short \t %zu \t %d \t %d\n",sizeof(ss),(short)~ss,ss);
    printf("unsigned short \t %zu \t 0 \t\t %u\n",sizeof(us),us);
    printf("signed int \t %zu \t %d \t %d\n",sizeof(si),(int)~si,si);
    printf("unsigned int \t %zu \t 0 \t\t %u\n",sizeof(ui),ui);
    printf("signed long \t %zu \t %ld \t %ld\n",sizeof(sl),(long)~sl,sl);
    printf("unsigned long \t %zu \t 0 \t\t %lu\n",sizeof(ul),ul);
}
