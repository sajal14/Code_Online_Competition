#include <stdio.h>
#include <math.h>
#define MAX_N 101
int a[101];
unsigned long long ncr[101][101];
void Pascal()
 {
 int n,k;
 ncr[1][1]=1;
 for(n=1;n<=MAX_N-1;n++)
    ncr[n][0]=1;

 ncr[1][0]=1;
 for(n=2; n<=(MAX_N-1); n++)
    for(k=1; k<=n; k++)
    {
        ncr[n][k]=ncr[n-1][k-1]+ncr[n-1][k];
       // printf(" (%d,%d):%llu \n",n,k,ncr[n][k]);
    }

 }

 int main(void)
 {
     int t,n,m,N,r,i,players,flag;
     Pascal();
     scanf("%d",&t);
     //printf("%llu",ncr[4][2]);

     while(t--)
     {
         for(i=0;i<=100;i++)
            a[i]=0;
         for(i=1;i<=11;i++)
            {scanf("%d",&n);
              a[n]++;
             }
             scanf("%d",&m);
             players=0;
             flag=0;

            for(i=100;i>=1;i--)
            {
                if(a[i])
                {
                    //printf("!%d,%d!",i,a[i]);
                    players=players+a[i];
                    if(players>m)
                    {
                        players=players-a[i];
                        r=m-players;
                        N=a[i];
                        // printf("~%d,%d~",N,r);
                        flag=1;
                        break;
                    }
                    if(players==m)
                        break;
                }
            }
            if(flag)
            printf("%llu\n",ncr[N][r]);
            else
                printf("1\n");
     }
     return 0;
}

