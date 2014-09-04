#include<stdio.h>
int r[100][2];
int pos[100];
int main()
{
    int t,n,i,j,cnt,v,k,val,f;
    scanf("%d",&t);

    while(t--)
    {
        f=0;
        for(i=0;i<100;i++)
        for(j=0;j<2;j++)
            r[i][j]=0;

        for(i=0;i<100;i++)
            pos[i]=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            cnt=0;
            for(j=0;j<n;j++)
                {scanf("%d",&v);
                    if(v)
                    cnt++;
                }
            r[i][0]=cnt;
        }

            for(i=1;i<=n;i++)
            {
                cnt=0;
                for(j=0;j<n;j++)
                    {
                        scanf("%d",&v);
                        if(v)
                            cnt++;
                    }
                    f=0;
                    srand(time(NULL));
                    while(f<=100000)
                    {val=rand()%n+1;

                        if((r[val][1]==0)&&(r[val][0]==cnt))
                        {pos[i]=val;
                         r[val][1]=1;
                            break;
                         }
                         f++;
                    }

            }
    for(i=n;i>=1;i--)
    {
        if(pos[i]==0)
        {
            f=0;
            srand(time(NULL));
            while(f<100000)
            //for(k=n;k>=1;k--)
            {
                k=rand()%n+1;
                if(r[k][1]==0)
                {
                    pos[i]=k;
                    r[k][1]=1;
                    break;
                }
                f++;
            }
        }
    }
    for(i=1;i<=n;i++)
        printf("%d ",i);
        printf("\n");
            for(i=1;i<=n;i++)
            printf("%d ",pos[i]);
            printf("\n");
    }

return 0;
}
