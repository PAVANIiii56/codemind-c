#include<stdio.h>
int main()
{
    int n,mul,i,tab;
    scanf("%d%d",&n,&mul);
     for(i=1;i<=mul;i++)
     {
         if(i%2!=0)
         {
     tab=n*i;
     printf("%d x %d = %d
",n,i,tab);
         }
     }
}