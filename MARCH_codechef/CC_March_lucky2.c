#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MOD 1000000009

char st1[1001];
char st2[1001];

void increment(char *s)
{
    int i=0,t,len;
    while(s[i]!='\0')
        i++;

    i--;
    if(s[i]!='9')
    {t=s[i]-'0';
        t++;
     s[i]=t+'0';
    }
    else
    {
        len=strlen(s);
          while(s[i]=='9')
            i--;
        if(i!=-1)
     {
        s[i]=(s[i]-'0'+1)+'0';
            i++;
     while(s[i]!='\0')
        {s[i]='0';
            i++;
        }
     }
     else
     {
         s[0]='1';
         for(i=1;i<=len;i++)
            s[i]='0';
        s[i]='\0';
     }
    }
}


int lucky(char *s)
{
    int cnt=0,flag=0,i,r;
    for(i=0;s[i]!='\0';i++)
        if((s[i]=='4')||(s[i]=='7'))
            { cnt++;
                flag=1;
            }
    if(!flag)
        return 0;
               //  printf("LUCKY%s :%d\n",s,cnt);

   /* while(cnt)
    {
        r=cnt%10;
      //  printf("!%d!",r);
        if((r!=4)&&(r!=7))
          {
              return 0;

          }
        cnt=cnt/10;
    }*/
    if((cnt==4)||(cnt==7)||(cnt==44)||(cnt==47)||(cnt==74)||(cnt==77)||(cnt==444)||(cnt==447)||(cnt==474)||(cnt==477)||(cnt==744)||(cnt==747)||(cnt==774)||(cnt==777))
    return 1;
    else
    return 0;
}
unsigned long long calc()
{
    unsigned long long cnt=0;
    while((strcmp(st1,st2)))
    {
        if(lucky(st1))
            {
                cnt=(cnt+1)%MOD;
               // printf("LUCKY%s",st1);
            }
        increment(st1);
        //printf("inc: %s %s\n",st1,st2);
    }

    if(lucky(st2))
        cnt=((cnt+1)%MOD);

    return cnt;
}
int main()
{
    int t;
    unsigned long long n;
    scanf("%d",&t);
    while(t--)
    {
     scanf("%s",st1);
     scanf("%s",st2);
     n=calc();

    printf("%llu\n",n);

    }

}
