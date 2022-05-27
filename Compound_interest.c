#include<stdio.h>
#include<math.h>
int main()
{
    double P,R,T,compound;
    scanf("%lf%lf%lf",&P,&R,&T);
    compound=P*pow((1+(R/100)),T);
    printf("%.2f",compound);
}