class prime_palindrome
{
    void main(int a)
    {
        int c=0;
        for(int i=2;i<a;i++)
         if(a%i==0)
         c++; 
        int d,s=0,x=a;
        while(a!=0)
        {
            d=a%10;
            s=s*10+d;
            a/=10;
        }
        if(s==x&&c==0)
        System.out.println("prime palindrome number");
        else
        System.out.println("not a prime palindrome number");
    }
}
