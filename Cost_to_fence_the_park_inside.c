#include<stdio.h>
int main()
{
    int L,B,W,C,area,total;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if(L<=W+W || B<=W+W)
    {
        printf("Impossible");
    }
    else
    {
        area=L*B-(L-2*W)*(B-2*W);
        total=area*C;
        printf("%d",total);
    }
}