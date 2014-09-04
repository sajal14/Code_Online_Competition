#include<stdio.h>
#define MOD 1000000007

int tab[52];
unsigned long long we[502],te[502];
int fact[]={1,1,2,6,24,120,720,5040,40320,362880,3628800};
int main()
{
    int t,l,i,c;
    unsigned long long tmp;
    char s[502];
    scanf("%d",&t);
    unsigned long long w;
    while(t--)
    {
         scanf("%s",s);
        for(i=0;i<52;i++)
            tab[i]=0;

            w=1;
            we[0]=1;
            te[0]=1;
            if((s[0]>=97)&&(s[0]<=122))
                tab[s[0]-'a']++;
            else
            tab[s[0]-39]++;

        for(i=1;s[i]!='\0';i++)
        {
            if((s[i]>=97)&&(s[i]<=122))
                {
                    c=s[i]-'a';
                   if(!tab[c])
                   {we[i]=(te[i-1]*(i+1));
                        te[i]=we[i]%MOD;
                        tmp=we[i]/MOD;
                   }
                    else
                    {
                     //   printf(" temp -> %lld",tmp);

                        //we[i]=(we[i-1]*fact[tab[c]]*(i+1))/fact[tab[c]+1];
                        we[i]=(((MOD*tmp+te[i-1])*fact[tab[c]]*(i+1))/fact[tab[c]+1]);
                         te[i]=we[i]%MOD;
                         tmp=we[i]/MOD;
                    }
                     tab[c]++;
                printf("%c %llu %llu\n",s[i],we[i],te[i]);
                }
                else
                {
                      c=s[i]-39;
                    if(!tab[c])
                     {we[i]=(te[i-1]*(i+1));
                        te[i]=we[i]%MOD;
                        tmp=we[i]/MOD;
                     }
                    else
                    {
                        //we[i]=(we[i-1]*fact[tab[c]]*(i+1))/fact[tab[c]+1];
                        we[i]=(((MOD*tmp+te[i-1])*fact[tab[c]]*(i+1))/fact[tab[c]+1]);
                         te[i]=we[i]%MOD;
                           tmp=we[i]/MOD;
                    }
                tab[c]++;
                 printf("%c %llu\n",s[i],te[i]%MOD);
                }

        }
         printf("%llu\n",te[i-1]%MOD);

    }
return 0;
}
