#include<stdio.h>
int gcd(int a,int b)
 {

     if(b==0)
      return a;
      else
      return gcd(b,a%b);
     }
int main()
{
    int cnt=1,t,n,m,i,val,max=1,p,num,den,k;
    scanf("%d",&t);
    for(cnt=1;cnt<=t;cnt++)
    {
        max=1;
        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&val);
            if(val>max)
                max=val;
        }
        p=n-max;
        if (m==0)
           printf("Case #%d: 1/1\n",cnt);
       else if(!p)
            printf("Case #%d: 0/1\n",cnt);

        else
        {
            num=p;
            den=n;

            k=gcd(n,p);
            //printf("!%d %d %d!",k,num,den);
            num/=k;
            den/=k;
            printf("Case #%d: %d/%d\n",cnt,num,den);

        }

    }
    return 0;
}
