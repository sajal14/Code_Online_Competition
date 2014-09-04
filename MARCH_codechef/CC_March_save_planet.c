#include <stdio.h>
 #include <math.h>
char a[10000];

int ans[50];

void decode(unsigned long long *n,int up,int to)
{
    int i=0;
    for(i=up;i>=to;i--)
    {
        if(a[i]=='0')
            (*n)=(*n)+pow(2,up-i);
    }
}
int main()
{
    int t,len,frm,i,r;
    unsigned long long n=0;
    unsigned long long n2=0;
    unsigned long long n3=0;
    int m,rem;
    scanf("%d",&t);
    while(t--)
    {   n=0;
        n2=0;
        n3=0;
        scanf("%s",a);
        decode(&n,31,0);

        decode(&n2,47,32);

        decode(&n3,48+n2-1,48);

        m=n3%n;
        rem=m;
//        printf("%llu %llu %llu\n",n,n2,n3);
        i=0;
        if(m)
       {while(m)
        {
            r=m%2;
            if(r==0)
                r=1;
            else
                r=0;

            ans[i++]=r;
            m=m/2;
        }

        len=i;
        for(i=len-1;i>=0;i--)
            if(ans[i]==0)
                break;

        frm=i;
        for(i=frm;i>=0;i--)
            printf("%d",ans[i]);
        printf("\n");
       }
       else
       {
           printf("1\n");
       }

}

return 0;
}
