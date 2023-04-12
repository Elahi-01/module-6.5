#include<stdio.h>
#include<math.h>

int main()
{
    long long int eye,body,mouth,count=0,min;
    scanf("%lld %lld %lld",&eye,&mouth,&body);

    if(eye<mouth && eye<body)
    {
        min=eye;
    }
    else if(mouth<eye && mouth < body)
    {
        min=mouth;
    }
    else 
    {
        min=body;
    }
    count += min;
    eye -= min;
    mouth -= min;
    body -= min;

    if(eye/2>body)
    {
        min=body;
    }
    else{
        min=eye/2;
    }

    count += min;

    printf("%lld\n",count);
        
    
    
    
}