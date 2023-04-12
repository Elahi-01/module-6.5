#include<stdio.h>

int main()
{
    int n,rem,r;
    scanf("%d",&n);

    rem=n%10;
    r=n/10;  
     if(rem%r==0 || r%rem==0)
     {
        printf("YES\n");
     }       
     else
     printf("NO\n");

     
        
}