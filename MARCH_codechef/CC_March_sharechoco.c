#include<stdio.h>
#include<stdlib.h>

int parts[10201]={0};

int check(int n,int x,int y)
{
    int sum=0,i;
    int tot=x*y;
   for(i=0;i<n;i++)
    sum+=parts[i];

    if(sum==tot)
    return 1;
    else return 0;

}
int main()
{
    int a[101][101];
    int n,c,i,j,x,y;
    scanf("%d",&n);
   // while(n!=0)
    //{
        for(i=0;i<101;i++)
            for(j=0;j<101;j++)
                a[i][j]=0;
        scanf("%d%d",&x,&y);
        for(i=0;i<x;i++)
            for(j=0;j<y;j++)
                a[i][j]=1;

       for(i=0;i<n;i++)
            scanf("%d",&parts[i]);
        c=check(n,x,y);
        if(c)
            printf("YES\n");
        else
            printf("NO\n");
      //  scanf("%d",&n);
    //}

return 0;

}
