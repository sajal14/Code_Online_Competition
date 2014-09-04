/*question is of the RESTRICTED GROWTH , an application of BELL NUMBER
here a number in the string cannot be greater than max number already present there*/

#include<stdio.h>
#define MOD 1000000007
unsigned long long a[1001][1001];

int main()
{
    int i=0,j;
    for(i=0;i<=1000;i++)
        for(j=0;j<=1000;j++)
            a[i][j]=0;

    a[1][1]=1;
    unsigned long long temp=1;
   for(i=2;i<=1000;i++)
   {
       a[i][1]=temp;
       for(j=1;j<i;j++)
           a[i][j+1]=((a[i][j])%MOD+(a[i-1][j])%MOD)%MOD;
       temp=a[i][j];
   }
int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%llu\n",a[n][n]);
    }
return 0;
}
