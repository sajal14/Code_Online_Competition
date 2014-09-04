#include<stdio.h>
unsigned long long a[1000000];

unsigned long long cut;

int dec_chk(unsigned long long i,unsigned long long prev)
{
    unsigned long long t=a[i];
    if(t>=prev)
        while(t>=prev)
            t--;
    if((prev!=0)&&(t==0))
        return 0;


}
int main()
{
    unsigned long long t,i,l,prev,sum=0,av,p;
    scanf("%llu",&t);
    i=0;
    while(t--)
    {   scanf("%llu",&a[i++]);
    sum +=a[i-1];
    }
    av=sum/i;
    //printf("%llu",av);

    l=i;
    cut=0;
    /*for(i=0;i<l;i++)
        if(a[i]<=av)
            {cut=cut+a[i];
                a[i]=0;

            }*/
    for(i=0;i<l;i++)
     {
         d= dec_chk(i+1,a[i]);

     }
     for(i=p+1;i<l;i++)
     {
         if(a[i])
         {
             if(a[i]>=prev)
             {
                 while(a[i]>=prev)
                 {
                     a[i]--;
                     cut++;
                 }
                 prev=a[i];
             }

         }
     }
    printf("%llu\n",cut);
return 0;

}
