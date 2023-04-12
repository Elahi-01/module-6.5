#include<stdio.h>

int main()
{
    char c;
    int x;
    scanf("%c",&c);
    if(c>='a' && c<'z')
    {
      
       printf("%c\n",c+1); 
    }
    if(c>='z')
    {
        printf("a\n");
    }

}