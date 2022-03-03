#include<stdio.h>
int main()
{
  int n,i,sum;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
  int count=0,r;
     while(arr[i]>0)
     {
         r=arr[i]%10;
         count=count+1;
         arr[i]=arr[i]/10;
     }
     if(count%2==0)
     {
         sum=sum+1;
     }
  }
  printf("%d",sum);
}