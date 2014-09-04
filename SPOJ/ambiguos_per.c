#include<stdio.h>

int in[100001];
int out[100001];
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&in[i]);
            out[in[i]]=i;
        }

    i=1;
    while((in[i]==out[i])&&(i<=n))
        i++;
        if(i==n+1)
            printf("ambiguous\n");
        else
            printf("not ambiguous\n");
        scanf("%d",&n);
    }
return 0;
}
