/*Given an array arr[] of integers, find out the difference between any two elements such that larger element appears after the smaller number in arr[].
*/
#include<stdio.h>
int a[100001];
int main()
{
    int n,min,max,ti;
    int g1;
    int t,maxi,mini,i,j,flag;
    scanf("%d",&t);
    while(t--)
    {
        flag=1;
        g1=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
        }
        g1=a[1]-a[0];
        min=a[0];
        for(i=1;i<n;i++)
        {
           if((a[i]-min)>g1)
            g1= a[i]-min;

            if(a[i]<min)
                min=a[i];
        }

        if((g1<=0))
        printf("UNFIT\n");
        else printf("%d\n",g1);

    }

return 0;
}
