#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
     int i,j,c=0,count=0;
     for(i=1;i<=n;i++)
     {
         c=0;
         for(j=1;j<=n;j++)
         {
             if(i%j==0)
             {
                 c=c+1;
             }
         }
         if(c==9)
         {
             count=count+1;
             printf("%d ",i);
         }
     }
     printf("
");
     printf("Total=%d",count);
     return 0;

}