#include<stdio.h>
#define MAX 86029000

int is_not_prime[MAX/2];

int tab[5000001];

int main()

{
     int i,j,t;

     for(i=0;i<MAX/2;i++)
        is_not_prime[i]=0;


        for(i=3;i<=9257;i+=2)
        {

             if(!is_not_prime[(i-1)>>1])
             {
              //is_not_prime[i]=1;

            for( j=i*i;j<=MAX;j+=i)
            {
                if(j&1)//odd
             is_not_prime[(j-1)>>1]=1;
             }
        }
        }

        tab[0]=2;


        int cnt=1;

        for(i=3;i<MAX;i=i+2)
         if(is_not_prime[(i-1)>>1]==0)
          tab[cnt++]=i;


        int k;
         scanf("%d",&t);

        while(t--)
        {
            scanf("%d",&k);
            printf("%d\n",tab[k-1]);
            }

return 0;
}
