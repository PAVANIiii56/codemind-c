#include<stdio.h>
int main()
{
    int n,r,sum=0,i;
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
  if(sum==i)
  {
      printf("True");
  }
  else
  {
      printf("False");
  }
}