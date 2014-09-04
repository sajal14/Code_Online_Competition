#include<stdio.h>
#include<string.h>
char s1[1000000];
char s2[1000000];
int tab[26];
int tab2[26];
int f[6];


int flames(int pos,int cnt,unsigned long long sum)
{
    int val,i,sav;
    for(i=0;i<6;i++)
        f[i]=1;
    val= sum%cnt;
    sav= (sum%cnt)-1;

    for(i=0;i<5;i++)
    {
    //if(sum>5)
    //{val= sav+1;
      //  sav=val;
    //}
    //else
  //  val= sum%cnt;
  val=sum;
    while(val)
    {
        if(pos==6)
            pos=0;
        if(f[pos])
           { val--;
            //printf("%d ",pos);
           }
        pos++;
    }
   // printf("!%d!",pos-1);
    f[pos-1]=0;

    }

    for(i=0;i<6;i++)
       {
           if(f[i])
                return i;

       }

}
int main()
{
    int v;
    unsigned long long i,sum;
    int t,r;
    scanf("%d",&t);
   // scanf("%d",&r);

    while(t--)
  {scanf("%s",s1);
    scanf("%s",s2);
  //  gets(s1);
    //gets(s2);


    for(i=0;i<26;i++)
       {tab[i]=0;
       tab2[i]=0;
       }

     i=0;
    while(s1[i]!='\0')
    {
        if((s1[i]>='a')&&(s1[i]<='z'))
                tab[s1[i]-'a']++;
        else if((s1[i]>='A')&&(s1[i]<='Z'))
                tab[s1[i]-'A']++;

        i++;
    }

 i=0;
    while(s2[i]!='\0')
    {
        if((s2[i]>='a')&&(s2[i]<='z'))
                tab2[s2[i]-'a']++;

        else if((s2[i]>='A')&&(s2[i]<='Z'))
                    tab2[s2[i]-'A']++;

        i++;
    }
    sum=0;
for(i=0;i<26;i++)
 if(tab[i]>tab2[i])
    sum+=tab[i]-tab2[i];
else
    sum+=tab2[i]-tab[i];

//printf("sum: %llu\n",sum);

 v=flames(0,6,sum);

 switch(v)
 {
     case 0: printf("FRIENDS\n");
                break;
     case 1: printf("LOVE\n");
                break;
     case 2: printf("ADORE\n");
        break;
     case 3: printf("MARRIAGE\n");
            break;
     case 4: printf("ENEMIES\n");
            break;
     case 5: printf("SISTER\n");
            break;

 }

}
return 0;
}
