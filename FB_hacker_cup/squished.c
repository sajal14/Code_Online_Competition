#include<stdio.h>
#include<string.h>

char s[1001];


int all(int m)
{
    int len=0;
   if((!strstr(s,"0"))&&(atoi(s)<=m))
       {
           len=strlen(s);
           return pow(2,len-1);
       }

return 0;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        scanf("%s",s);
        //printf("")

        if(all(m))
        {
            printf("%d\n",all(m));
            continue;
        }


    }

}
