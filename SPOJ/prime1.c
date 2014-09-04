/* Sieve Of Eratosthenes
http://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
*/
#include<stdio.h>

int is_prime[32000];
int main()
{

    int i,t,m,n,j;

    for(i=1;i<32000;i=i+1)
        is_prime[i]=1;
    is_prime[0]=0;
    is_prime[1]=0; //1 is neither a prime nor composite.
    for(i=2;i<32000;i++)
    {
        if(is_prime[i])//if a[i] is a prime then...
        {
            for(j=2;(i*j)<32000;j++)
            is_prime[i*j]=0; /*...mark all its multiples as composite.*/
        }
    }

   scanf("%d",&t);
   int pass;
   while(t--)
   {
       scanf("%d%d",&m,&n);
       for(i=m;i<=n;i++)
       {
            pass=(i!=1)?1:0;
            /*rule is to check all the numbers till the square root of n and is prime.
            if any of the prime number is divisible by m, then m is composite.therfore,break.*/
           for(j=2;j*j<=i;j++)
           {
               if(is_prime[j]) //if the number is prime
               {
                   if(i%j==0)  //and it divides the number m
                {pass=0;       //i.e the number is composite
                break;
                }

               }
           }
           if(pass)
       printf("%d\n",i);
       }
        printf("\n");
   }
return 0;
}
