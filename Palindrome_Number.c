#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,q,rev,r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        q=a[i];
        rev=0;
        while(q>0)
    {
        r=q%10;
        rev=(rev*10)+r;
        q=q/10;
    }
    if(rev==a[i])
    {
        printf("True
");
    }
    else
    {
    printf("False
");
    }
 }
}