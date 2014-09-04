#include<stdio.h>
char a[1000001];
int main()
{
int t,i,d;
unsigned long long cnt;
scanf("%d",&t);
while(t--)
{
    scanf("%s",a);
    cnt=0;
    for(i=0;a[i]!='\0';i++)
    {
        d=a[i]-'0';
        if((d!=4)&&(d!=7))
        cnt++;
    }
    printf("%lld\n",cnt);

}
return 0;

}
