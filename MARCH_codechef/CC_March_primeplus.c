#include<stdio.h>

int is_prime[1000001]={0};
unsigned long long sm[1000001]={0};
int main()
{

    int i,t,m,n,j;

    for(i=1;i<1000000;i=i+1)
        is_prime[i]=1;

    is_prime[0]=0;
    is_prime[1]=0; //1 is neither a prime nor composite.

    for(i=2;i<1000;i++)
    {
        if(is_prime[i])//if a[i] is a prime then...
        {
          for(j=2;(i*j)<1000000;j++)
            is_prime[i*j]=0; /*...mark all its multiples as composite.*/
        }
    }
   int pass;

    for(i=1;i<1000000;i++)
       {
           if(is_prime[i])
           {
               sm[i+1]+=sm[i]+i;
           }
            else
            sm[i+1]=sm[i];
       }

   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&n);
        if((n==2)||(n==1))
            printf("0\n");
        else
        printf("%llu\n",sm[n]);
   }
return 0;
}
