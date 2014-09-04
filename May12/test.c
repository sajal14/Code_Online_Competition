#include<stdio.h>
int main()
{
    unsigned long long n,m,t,i,cnt,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu %llu",&n,&m);
        cnt=0;
        for(i=m;i<=1000000000;i=i+m)
        {
            if(n>=i-1)
            {
                if(i%2)
                    cnt+=i/2;
                else
                    cnt+=i/2-1;
            }
            else if(n>=i/2+1)
                {
                    if(i%2)
                    cnt+=i/2-(i-1-n);
                    else
                    cnt+=i/2-1-(i-1-n);
                }
                if(i>n*2)
                    break;
        }

        printf("%llu\n",cnt);
    }
return 0;
}
