#include<stdio.h>
#define MOD 1000000007
int N;
int tab[52];
int pf[4];
int a[502];
int main()
{
    int t,l,i,c,j,d;
    unsigned long long ans;
    char s[502];
    scanf("%d",&t);
    while(t--)
    {
         scanf("%s",s);
        for(i=0;i<52;i++)
            tab[i]=0;

       for(i=0;s[i]!='\0';i++)
        {
            if((s[i]>=97)&&(s[i]<=122))
                   c=s[i]-'a';
            else
                c=s[i]-39;
            tab[c]++;
        }
        N=i;

    for(i=1;i<=N;i++)
        a[i]=i;

    for(i=0;i<4;i++)
        pf[i]=0;

    for(i=0;i<52;i++)
    {
        if(tab[i]>1)
        {
            switch(tab[i])
            {
                case 2: pf[0]++;
                    break;
                case 3: pf[0]++;
                        pf[1]++;
                        break;
                case 4: pf[0]=pf[0]+3;
                        pf[1]++;
                        break;
                case 5: pf[0]=pf[0]+3;
                        pf[1]++;
                        pf[2]++;
                        break;
                case 6: pf[0]=pf[0]+4;
                        pf[1]=pf[1]+2;
                        pf[2]++;
                        break;
                case 7: pf[0]=pf[0]+4;
                        pf[1]=pf[1]+2;
                        pf[2]++;
                        pf[3]++;
                        break;
                case 8: pf[0]=pf[0]+7;
                        pf[1]=pf[1]+2;
                        pf[2]++;
                        pf[3]++;
                        break;
                case 9: pf[0]=pf[0]+7;
                        pf[1]=pf[1]+4;
                        pf[2]++;
                        pf[3]++;
                        break;
                case 10: pf[0]=pf[0]+8;
                         pf[1]=pf[1]+4;
                         pf[2]=pf[2]+2;
                            pf[3]++;
                        break;
            }


        }
    }

    for(i=1;i<=N;i++)
    {
        for(j=0;(j<4);j++)
        {
            if(pf[j]<1)
            continue;
            if(j==0)
                d=2;
            else if(j==1)
                d=3;
            else if(j==2)
            d=5;
            else
                d=7;

            while(((a[i]%d)==0)&&(pf[j]>0))
            {  a[i]=a[i]/d;
                pf[j]--;
            }
        }
    }
    ans=1;

    for(i=1;i<=N;i++)
        ans=(ans*a[i])%MOD;


    printf("%llu\n",ans);
}
return 0;
}
