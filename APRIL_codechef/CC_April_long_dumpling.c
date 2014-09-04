#include<stdio.h>
#define ULL unsigned long long
 ULL a,b,c,d,k;
 ULL gcd(ULL a,ULL b)
 {
     if(b==0)
      return a;
      else
      return gcd(b,a%b);
 }
int main()
{
    int t;
    ULL ha,hb,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu%llu%llu%llu%llu",&a,&b,&c,&d,&k);
       ans=0;
       if(a>b)
            ha=gcd(a,b);
            else
            ha=gcd(b,a);
        if(c>d)
            hb=gcd(c,d);
            else
            hb=gcd(d,c);

        ans=k/ha;
         if(ha>hb)
        ans=ans*(gcd(ha,hb));
        else
        ans=ans*(gcd(hb,ha));
        ans=ans/hb;

        ans*=2;
        ans++;
        printf("%llu\n",ans);

    }
return 0;
}
