#include<stdio.h>

int main()
{
    int a,b;
    float x,r;
    scanf("%d %d",&a,&b);
    r=b*1.0;
    x=(r*100)/(100-a);
    printf("%.2f\n",x);
}