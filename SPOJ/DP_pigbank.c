/*DP SOLUTION OF
http://www.spoj.pl/problems/PIGBANK/
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define max(a,b) (((a)>(b))?(a):(b))

  int p[1000];
    int m[1000];
int main()
{

    int t,min,maxw,n,i,temp;
    scanf("%d",&t);
    while(t--)
    {
        temp = 1000000;
        scanf("%d%d",&min,&maxw);
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {scanf("%d%d",&p[i],&m[i]);
                if(m[i]<temp)
                temp=m[i];
            }
    int a[10000],j;    /*INPUT : 1 10 110 2 1 1 30 50*/
    for(i=0;i<temp;i++)
    a[i]=0;
    for(i=temp;i<=maxw-min;i++)
        a[i]=1000000;
    for(i=temp;i<=(maxw-min);i++) //traversing all the weights from minm to net weight of the coins
    {
        for(j=0;j<n;j++)    //checking for each case (Here each coin)
        {
            if((i-m[j])>=0) //weight of current i should be > or equal to weight of that coin
            {
                if(((a[i-m[j]]>0)&&(a[i-m[j]]!=1000000))||(i==m[j]))
                    {
                        if(a[i]>a[i-m[j]]+p[j])  //a[i-m[j]] = minm amount stored at (curr. weight-weight) of that jth coin
                        a[i]= a[i-m[j]]+p[j];     //adding p[j] i.e value of that amount of j.
                    }                             //If this is less than the prev value stored at a[i],then updating a[i]
                else                                //Less becoz we have to chk the worst case..i.e minm amount.
                    a[i]=0;
            }
        }
    }

   if(!(a[maxw-min]))
    printf("This is impossible.\n");
    else
    printf("The minimum amount of money in the piggy-bank is %d.\n",a[maxw-min]);
}
 return 0;
}

