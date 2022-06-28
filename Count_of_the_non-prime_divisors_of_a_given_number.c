#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                c=c+1;
                break;
                }
            }
        }
    }
    printf("%d",c);
}