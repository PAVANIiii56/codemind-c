#include<stdio.h>
int main()
{
    int n,r,largest=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>largest)
        {
            largest=r;
        }
        n=n/10;
    }
    printf("%d",largest);
}