#include<stdio.h>
int main()
{
    int L,B,W,C,area,total;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    area=(L+2*W)*(B+2*W)-L*B;
    total=area*C;
    printf("%d",total);
}