#include<stdio.h>

#include<string.h>

#define MOD 4207849484LL

long long one[3500],two[3500],tab[3500],three[3500];

char s[1200];

FILE *o,*in;

void call_two(int M,int cnt)
{
    //scanf("%s",s);
    fscanf(in,"%s",s);
    int len;
    len=strlen(s);
    int i;
    for(i=0;i<len;i++)
        one[i]=s[i]-'0';

if(one[0]==0)
    {
        fprintf(o,"Case #%d: 0\n",cnt);
        return;
    }
    for(i=1;i<len;i++)
        two[i]=10*one[i-1]+one[i];

        tab[0]=1;
    if(one[1])
    tab[1]=1;
    else
    tab[1]=0;

      if((two[1]>9)&&(two[1]<=M))
         tab[1]++;

        for(i=2;i<len;i++)
        {if(one[i])
             tab[i]=tab[i-1];

            else tab[i]=0;

            if((two[i]>9)&&(two[i]<=M))
             tab[i]=(tab[i]+tab[i-2])%MOD;
        }
       // for(i=0;i<len;i++)
        //printf("%d ",tab[len-1]%MOD);
        fprintf(o,"Case #%d: %lld\n",cnt,tab[len-1]%MOD);
}

void call_three(int M,int cnt)
{
   // scanf("%s",s);
      fscanf(in,"%s",s);
    int len;
    len=strlen(s);
    int i;
    for(i=0;i<len;i++)
        one[i]=s[i]-'0';

if(one[0]==0)
    {
         fprintf(o,"Case #%d: 0\n",cnt);
         return;
    }
    for(i=1;i<len;i++)
        two[i]=10*one[i-1]+one[i];

    for(i=2;i<len;i++)
        three[i]=one[i-2]*100+one[i-1]*10+one[i];

        tab[0]=1;
    if(one[1])
    tab[1]=1;
    else
    tab[1]=0;

      if((two[1]>9))
         tab[1]++;

        if(one[2])
        tab[2]=tab[1]+1;
        else
        tab[2]=1;


    if(three[2]<=M)
    tab[2]++;

        for(i=3;i<len;i++)
        {if(one[i])
             tab[i]=tab[i-1]%MOD;
            else tab[i]=0;

            if((two[i]>9))
             tab[i]=(tab[i]%MOD+tab[i-2]%MOD)%MOD;

             if((three[i]>99)&&(three[i]<=M))
                tab[i]=(tab[i]%MOD+tab[i-3]%MOD)%MOD;
        }
       // for(i=0;i<len;i++)

      //  printf("%d ",tab[len-1]%MOD);
      for (i = 0; i < len; ++i) printf("%lld ", tab[i]);
      fprintf(o,"Case #%d: %lld\n",cnt,tab[len-1]%MOD);
}

int main()
{
    int n,m,cnt=1;
  in = fopen("input.txt","r");
    o = fopen("ss_output.txt","w");

      fscanf(in,"%d",&n);

    while(n--)
    {
        //scanf("%d",&m);
        fscanf(in,"%d",&m);
        if(m<=99)
        call_two(m,cnt);
        else
        call_three(m,cnt);
        cnt++;
    }

    fclose(in);
    fclose(o);
    return 0;


}
