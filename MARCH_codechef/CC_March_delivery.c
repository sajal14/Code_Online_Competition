#include<stdio.h>

#define MAX(a,b) ((a)>(b))?(a):(b)
int p[101][101];

void warshal(int p[101][101],int n)
{
    int i,j,k;
 for(k=0;k<n;k++)
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    p[i][j]=MAX(p[i][j],p[i][k]&&p[k][j]);
}
int main()
{
    int t,i,j,n,m,u,v,q,a,b;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<101;i++)
            for(j=0;j<101;j++)
            p[i][j]=0;

        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
           {scanf("%d%d",&u,&v);
        p[u][v]=1;
            p[v][u]=1;
           }

        printf("matrix is\n");
        for(i=0;i<n;i++)
           {
               printf("\n");
            for(j=0;j<n;j++)
                printf("%d ",p[i][j]);
            }
         warshal(p,n);

         for(i=0;i<n;i++)
           {
               printf("\n");
            for(j=0;j<n;j++)
                printf("%d ",p[i][j]);
            }

        scanf("%d",&q);
        while(q--)
        {
            scanf("%d%d",&a,&b);
            if(a==b)
                printf("YO\n");
           else
            {
                if(p[a][b]==1)
                printf("YO\n");
                else printf("NO\n");
            }
        }
    }
return 0;
}
