#include<stdio.h>

unsigned long long a[100001];
unsigned long long b[100001];
unsigned long long c[100001];

int hash[1000001]={0};
void sum(unsigned long long num,unsigned long long arr[])
{
    int i=0;
    int r;
    unsigned long long add=0;
    unsigned long long temp;
    arr[0]=num;
    for(i=1;i<100000;i++)
        {
            add=0;
            temp=num;
            while(temp)
            {
                r=temp%10;
                add=add+r;
                temp=temp/10;
            }
            num=num+add;
            arr[i]=num;
        }
}

int find(unsigned long long num,unsigned long long *ans)
{
    int i,add,r,temp;
     if(hash[num])
               {
                   (*ans)=num;
                   return hash[num];

               }
    for(i=0;i<100000;i++)
        {
            add=0;
            temp=num;
            while(temp)
            {
                r=temp%10;
                add=add+r;
                temp=temp/10;
            }
            num=num+add;
            if(hash[num])
               {
                   (*ans)=num;
                   return hash[num];

               }
        }

}

int main()
{
    int i,t,r;
    unsigned long long num,ans;

    sum(1,a);
    sum(3,b);
    sum(9,c);

     for(i=0;i<=1000000;i++)
        hash[i]=0;

    for(i=0;i<100000;i++)
       if(c[i]<=1000000)
          hash[c[i]]=9;

    for(i=0;i<100000;i++)
       if(b[i]<=1000000)
        hash[b[i]]=3;

    for(i=0;i<100000;i++)
       if(a[i]<=1000000)
        hash[a[i]]=1;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&num);
        r=find(num,&ans);
        printf("%d %llu\n",r,ans);
    }
return 0;
}
