#include<stdio.h>
#include<stdlib.h>

char s[10000000];
char* tab[1000000];

int last_digit(char *s)
{
    int i=0,l,tmp;

    while(s[i]!='\0')
    {
        tmp =s[i]-'0';
        if(tmp!=0)
            l=tmp;
        i++;
    }
return l;
}

unsigned long long function(unsigned long long l)
{
    int i,le;

    unsigned long long m,n;
    unsigned long long ans=1;
    for(i=0;i<l;i++)
     {
         if(strcmp(tab[i],"0")==0)
            return 0;
         le=last_digit(tab[i]);
         ans=ans*le;

         if((ans%10)==0)
            while((ans%10)==0)
                ans=ans/10;
         if(ans%10)
                ans=ans%10;

     }

     //printf("\n%llu",ans);
     return ans;

}
int main()
{
    unsigned long long t,i,val;
    int r;
     char*p;
    scanf("%llu",&t);
    //scanf("%d",&r);
    while(t--)
    {   scanf("%s",s);
        //gets(s);
        p=s;
        p= strtok(p,"X");

        i=0;
         while(p)
    {
        tab[i++]=p;
        p= strtok(NULL,"X");
    }

    //printf("%llu\n",function(i));
    val= function(i);
    if(val)
        printf("%llu\n",val);
    else
    printf("Robot Hanged.\n");


    }
return 0;

}
