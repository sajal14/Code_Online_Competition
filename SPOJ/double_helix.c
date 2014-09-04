#include<stdio.h>

int a1[10001];
int a2[10001];

int main()
{
    int i=0,n1,n2,j,s1,s2,k1=0,k2=0;
    long long sum;
    scanf("%d",&n1);
    while(n1!=0)
    {
        k1=k2=s1=s2=sum=0;
    for(i=0;i<=10000;i++)
    {
        a1[i]=a2[i]=0;
    }
    for(i=0;i<n1;i++)
        scanf("%d",&a1[i]);
          scanf("%d",&n2);
    for(i=0;i<n2;i++)
        scanf("%d",&a2[i]);

        for(i=0,j=0;(i<n1)&&(j<n2);)
        {
            if(a1[i]<a2[j])
                {   s1=s1+a1[i];
                    i++;
                }
            else if(a1[i]>a2[j])
                {   s2=s2+a2[j];
                    j++;
                }
            else
                {
                    if(s1>s2)
                        sum=sum+s1+a1[i];
                    else
                    sum=sum+s2+a1[i];
                   // printf("!%lld!",sum);
                        s1=0;
                        s2=0;
                   // printf("%d",a1[i]);

                    i++;
                    j++;
                    k1=i;
                   k2=j;
                }
        }
       // printf("~%d%d~",k1,k2);
        if((k1<n1)&&(k2==n2))
         {s1=0;
             for(k1;k1<n1;k1++)
                s1+=a1[k1];
            if(sum+s1>sum)
                sum=sum+s1;

         }
        else if((k2<n2)&&(k1==n1))
         {s1=0;
             for(k2;k2<n2;k2++)
                s1+=a2[k2];
            if(sum+s1>sum)
                sum=sum+s1;
         }
        else if((k1<n1)&&(k2<n2))
        {
            s1=0;s2=0;
            for(k1;k1<n1;k1++)
                s1+=a1[k1];
             for(k2;k2<n2;k2++)
                s2+=a2[k2];
            if(s1<s2)
                sum+=s2;
            else
                sum+=s1;

        }
    printf("%lld\n",sum);
        scanf("%d",&n1);
}
return 0;
}
