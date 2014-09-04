#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
     unsigned int  n,m,i,j;

      unsigned int   max=1,sum=0;

    scanf("%u%u",&n,&m);
     unsigned int a[n];

    for(i=0;i<n;i++)
       scanf("%u",&a[i]);

    i=0;
    j=0;
   while(j<n)
    {
        sum=sum+a[j];
        j++;

        while(sum>m)
        {
            sum=sum-a[i];
            i++;
        }
        if(sum>max)
        max=sum;
    }
    printf("%u\n",max);

    return 0;



}
