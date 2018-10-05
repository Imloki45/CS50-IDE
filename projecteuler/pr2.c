#include<stdio.h>
main()
{
    long long int a=1,b=2,c=0,l=0,r=0,i=1,sum=0;
    while(i<4000000&&c<=4000000)
{
    c=a+b;
    a=b;
    b=c;
    l++; i++;
    if(c%2==0)
    sum+=c;
}
printf("%lld",sum);
}
