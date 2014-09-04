#include<stdio.h>
int main()
{
        int t,cnt=0,i;
        int sp,a,p,k,n;
        scanf("%d",&t);

        for( k=1;k<=t;k++)
        {
            cnt=0;
        scanf("%d%d%d",&n,&sp,&p);
        for( i=0;i<n;i++)
        {
            scanf("%d",&a);

            if((a-p)/2>=p-1)
            cnt++;
            else if(((a-p)/2==p-2)&& (sp!=0))
            {cnt++;
              sp--;
              }
        }
         printf("Case #%d: %d\n",k,cnt);
        }
return 0;
}
