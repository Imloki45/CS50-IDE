#include<stdio.h>
main()
{
    long long int i,j;
    int cnt;
    long long int sum=0;
    for(i=1;i<2000000;i++)
    {
        for(j=1,cnt=0;j<=i;j++)
        {
            if(i%j==0)
            cnt++;
        }
        if(cnt==2)
        sum+=i;
    }
    printf("%lld",sum);

}
