#include<stdio.h>

char a[12][12];
int flag[12][12];
int d;
void byparts(char *s,int r)
{
    int i=0;
    int c=1;
    while(s[i]!='\0')
    {
        a[r+1][c]=s[i];
        c++;
        i++;
    }
}

int recur(int cnt,int r,int c)
{

    if(a[r][c]=='Z')
        { d=0;
            return (cnt-1);
        }

    if(flag[r][c])
        {  d=1;
            return(cnt-flag[r][c]);
        }

     flag[r][c]=cnt;
    if ((a[r][c]=='N'))
        recur(cnt+1,r-1,c);
    else if ((a[r][c]=='S'))
        recur(cnt+1,r+1,c);
    else if ((a[r][c]=='W'))
       recur(cnt+1,r,c-1);
    else
        recur(cnt+1,r,c+1);
}
int main()
{
    int t,i,j,k,r,c,val;
    char tmp[12];
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d%d%d",&i,&j,&k);
        for(c=0;c<=j+1;c++)
           {a[0][c]='Z';
            a[i+1][c]='Z';
           }
        for(r=0;r<=i+1;r++)
        {
            a[r][0]='Z';
            a[r][j+1]='Z';
        }
    for(r=0;r<i;r++)
        {
           scanf("%s",tmp);
           byparts(tmp,r);
        }

        for(r=0;r<=11;r++)
            for(c=0;c<=11;c++)
                flag[r][c]=0;

        val= recur(1,1,k);
        if(d)
            printf("%dL\n",val);
        else
            printf("%dE\n",val);

    }
    return 0;
}
