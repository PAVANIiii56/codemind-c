#include<stdio.h>
#include<math.h>
 int main()
 {
     int a,b,c,r,result;
     scanf("%d%d%d",&a,&b,&c);
    result=pow(a,b);
    {
      r=result%c;
    }
    printf("%d",r);
     
 }