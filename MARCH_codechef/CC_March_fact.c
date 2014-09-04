#include<stdio.h>

int a[3000];

void display()
{
    int i;
    for(i=0;(a[i]==0);i++);
    for(;i<3000;i++)
        printf("%d",a[i]);
    printf("\n");
}
int main()
{
    int n,i,j;
    int t,rem,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<3000;i++)
            a[i]=0;
        rem=0;
        a[2999]=1;
        i=2999;
        for(j=2;j<=n;j++)
        {
           rem=0;
           temp=0;
           i=2999;
           while(i>0)
           {
            temp = j*a[i]+rem;
            rem=0;
            if(temp<10)
                a[i]=temp;
            else
                {a[i]=temp%10;
                    rem=temp/10;
            }
            i--;
           }

        }

    display();
}
return 0;
}
