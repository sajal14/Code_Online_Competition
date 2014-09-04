#include<stdio.h>
#include<math.h>
#define ULL unsigned long long
int main()
{
    int n,t,cnt,x,i,p,val,a,r,v=0;


        cnt=0;
     scanf("%d",&n);

    if(n==1)
            printf("0\n");
        else
    { p=1;
         x=1;
        while(p<n)
        p=p<<1;
        //printf("%d",p);
     a=2,r=2;
     while(a<=n)
        {cnt++;
            a=a*2;
        }
        // printf("%d\n",cnt);
        t=p/2;
    while(t>1)
    {   if((t+(t/2))<=n)
        cnt++;
        t=t>>1;
    }
        printf("%d\n",cnt);
    while(1)
    {
        x=x<<1;
        if(x>n)
            break;
        printf("%d ",n/x);
        for(i=1;x*i<=n;i++)
        {
            printf("%d+%d=%d ",(x*i)-(x/2),x*i,x*i);
        }
        printf("\n");

    }

    while(1)
    {
        p=p>>1;
        //printf("~%d~",p);
        if(p==1)
            break;
        val=p+(p/2);
        v=0;
        if(n>=val)
            {v=(n-val)/p;
                v++;
            }
        if(v)
        {printf("%d ",v);

        for(i=1;(p*i)+(p/2)<=n;i++)
        {
            printf("%d+%d=%d ",(p*i),(p*i)+(p/2),(p*i)+(p/2));
        }
        printf("\n");
        }
    }
    }

    return 0;

}
