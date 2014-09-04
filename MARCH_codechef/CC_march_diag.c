#include<stdio.h>

int is_prime[10000001]={0};
int main()
{

    int i,t,m,n,j;

    for(i=1;i<10000000;i=i+1)
        is_prime[i]=1;

    is_prime[0]=0;
    is_prime[1]=0; //1 is neither a prime nor composite.

    for(i=2;i<3200;i++)
    {
        if(is_prime[i])//if a[i] is a prime then...
        {
          for(j=2;(i*j)<=10000000;j++)
            is_prime[i*j]=0; /*...mark all its multiples as composite.*/
        }
    }

   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&n);
        if(n==2)
            printf("YES\n");
        else if((is_prime[n])&&((n%4)==1))
            printf("YES\n");
        else
            printf("NO\n");

   }
return 0;
}
