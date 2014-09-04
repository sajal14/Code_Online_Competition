#include<stdio.h>
//#define unsigned long long ull
int main()
{
        unsigned long long a[101][101];
    int i,j;

    a[2][0]=3;
    a[2][1]=1;
    a[2][2]=0;

    a[3][0]=5;
    a[3][1]=2;
    a[3][2]=1;
    a[3][3]=0;

    for(i=4;i<=100;i++)
        {
            a[i][0]=a[i-1][0]+a[i-2][0];
            //a[i][i-1]=1;
            a[i][i]=0;
        }

        for(i=4;i<=100;i++)
        {
            for(j=1;j<i;j++)
            {
                a[i][j]=a[i-2][j]+a[i-1][j]+(a[i-1][j-1]-a[i-2][j-1]);
            }
        }

        int t,s,n,k;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d%d%d",&s,&n,&k);
            printf("%d %llu\n",s,a[n][k]);
        }
    return 0;
}
