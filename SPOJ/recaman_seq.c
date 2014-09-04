#include<stdio.h>
int t[6000001]={0};
int main()
{
    int a[500001],n,i;
    a[0]=0;
    for(i=1;i<=500000;i++)
    {
        a[i]=a[i-1]-i;
        if((a[i]<=0)||(t[a[i]]))
        {a[i]=a[i-1]+i;
        }
        t[a[i]]=1;
    }
    scanf("%d",&n);
    if(n!=-1)
    while(1)
    {
        printf("%d\n",a[n]);
        scanf("%d",&n);
        if(n==-1)
        break;
    }
    return 0;
}
