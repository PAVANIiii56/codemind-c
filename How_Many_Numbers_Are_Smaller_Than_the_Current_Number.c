#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
         
         {
        scanf("%d",&a[i]);
         }
    for(i=0;i<n;i++)
    {
         int count=0;
       for(j=0;j<n;j++) 
       {
       if(a[i]>a[j])
       {
          count=count+1; 
       }
       }
       printf("%d ",count);
    }
}