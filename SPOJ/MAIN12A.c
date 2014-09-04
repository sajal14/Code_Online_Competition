#include<stdio.h>

unsigned long long n[1000002];
int main()
{
    int p,i,j,a;
    p=1;
    int num=2,t;
    n[1]=1;
    for(i=2;i<=1000000;)
    {
        //if(i==3)
            //printf("!%d!\n",n[p]);

        for(j=0;j<n[p];j++)
            {  // printf("%d",i);
                n[i++]=num;

            }
        num++;
   // i--;
       // i=i+n[p];
        p++;
    }
    //for(i=1;i<=30;i++)
      //  printf("%llu ",n[i]);
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%d",&a);
        printf("Case #%d: %llu\n",i,n[a]);
   }

return 0;

}
