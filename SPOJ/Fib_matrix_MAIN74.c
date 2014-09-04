#include<stdio.h>
#include<string.h>
#define MOD 1000000007
/* for finding nth fibonacci sequence*/
//(0,1),(1,1),(1,2),(2,3),(3,5),(5,8)
//int  f[2][1]={{1},{1}};
//int fib[100000]; //for MEMO

    unsigned long long r[2][2];
unsigned long long z[2][2];
unsigned long long a,b,c,d;
unsigned long long matrix(unsigned long long n)
{


    if (n==1)
    {
       // fib[n]=1;
        return 0;

    }
 //if(fib[n])
   // return 0;

    else
{
    matrix(n/2);

    a=(r[0][0]*r[0][0])%MOD+(r[0][1]*r[1][0])%MOD;
    b=(r[0][0]*r[0][1])%MOD+(r[0][1]*r[1][1])%MOD;
    c=(r[1][0]*r[0][0])%MOD+(r[1][1]*r[1][0])%MOD;
    d=(r[1][0]*r[0][1])%MOD+(r[1][1]*r[1][1])%MOD;
    r[0][0]=a;
    r[0][1]=b;
    r[1][0]=c;
    r[1][1]=d;

    if((n%2)==1)
    {
    a=(r[0][0]*z[0][0])%MOD+(r[0][1]*z[1][0])%MOD;
    b=(r[0][0]*z[0][1])%MOD+(r[0][1]*z[1][1])%MOD;
    c=(r[1][0]*z[0][0])%MOD+(r[1][1]*z[1][0])%MOD;
    d=(r[1][0]*z[0][1])%MOD+(r[1][1]*z[1][1])%MOD;
    r[0][0]=a;
    r[0][1]=b;
    r[1][0]=c;
    r[1][1]=d;

    }

    return (r[0][0]*1)%MOD+(r[0][1]*1)%MOD;
  // return 0;
}
}

int main()
{
    unsigned long long n;
    unsigned long long fibn;
    int t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%llu",&n);
    if(n==0)
    printf("0\n");
    else if (n==1)
    printf("2\n");
    else
    {

        r[0][0]=1;
        r[0][1]=1;
        r[1][0]=1;
        r[1][1]=0;

        z[0][0]=1;
        z[0][1]=1;
        z[1][0]=1;
        z[1][1]=0;
    fibn=matrix(n+1);
    printf("%llu\n",fibn%MOD);
    }
    }
    return 0;

}
