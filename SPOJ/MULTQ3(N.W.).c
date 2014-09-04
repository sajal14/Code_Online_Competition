#include<stdio.h>

int main()
{
   int n,q,q1,q2,q3,m;
   scanf("%d%d",&n,&q);
   int cnt=4,tmp,prev,i1,i;
   int a[100001]={0};
   int tab[100001]={0};
  // for(i=0;i<=n;i++)
   //a[i]=0;
   tab[0]=1;
   for(i=1;i<=n;i++)
       tab[i]+=tab[i-1]+1;

   while(q--)
   {
       scanf("%d%d%d",&q1,&q2,&q3);
       if(q1==1)
        {
            if(q2==q3)
            {
                if((a[q3])==0)
                printf("1\n");
                else
                printf("0\n");
            }

            else if(q2!=0)
            {
                tmp=tab[q3]-tab[q2-1];
                printf("%d\n",tmp);
              }
            else
            {printf("%d\n",tab[q3]);
            }

        }
        else
        {
            for(m=q2;m<=q3;m++)
            {a[m]++;
                if(a[m]==3)
                    a[m]=0;
                if((a[m])==0)
                tab[m]=tab[m-1]+1;
                else
                tab[m]=tab[m-1];
            }
            for(m=q3;m<=n-1;m++)
            {
                 if((a[m])==0)
                tab[m]=tab[m-1]+1;
                else
                tab[m]=tab[m-1];
            }


        }
      /*   for(i1=0;i1<n;i1++)
        printf("!%d!",tab[i1]);
      */

   }
   return 0;
}
