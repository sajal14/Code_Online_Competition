#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,cnt,maxcnt,t;
 int a[100][100];
 int in[100],out[100];

 for(i=0;i<43;i++)
    for(j=0;j<43;j++)
        a[i][j]=0;

scanf("%d",&t);

    for(i=0;i<t;i++)
        scanf("%d",&in[i]);
    for(i=0;i<t;i++)
        scanf("%d",&out[i]);

    for(i=0;i<t;i++)
    {
        for(j=in[i];j<out[i];j++)
            a[in[i]][j]=1;
    }
    cnt=0,maxcnt=0;
    for(j=0;j<22;j++)
        {
            cnt=0;
            for(i=0;i<22;i++)
                {if(a[i][j]==1)
                    cnt++;
                    }


        if(cnt>maxcnt)
            maxcnt=cnt;
        }

    printf("%d\n",maxcnt);

return 0;
}
