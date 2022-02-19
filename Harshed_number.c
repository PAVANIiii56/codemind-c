#include<stdio.h>
int main()
{
    int n,r,i,res=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        res=res+r;
        temp=temp/10;
    }
    if(n%res==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}