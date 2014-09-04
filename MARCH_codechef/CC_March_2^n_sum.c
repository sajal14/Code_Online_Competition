#include<stdio.h>

int arr[2000];


void display()
{
    int sum=0,i;
    for(i=0;i<2000;i++)
        sum+=arr[i];
    printf("%d\n",sum);

}
int main()
{
    int t,n,i,rem,temp,j;
    scanf("%d",&t);

    unsigned long long m=1;
    while(t--)
    {
         for(i=0;i<2000;i++)
            arr[i]=0;
        m=1;
        arr[1999]=1;
        scanf("%d",&n);

        rem=0;
        for(j=0;j<n;j++)
        {
            temp=0;
            rem=0;
            i=1999;

            while(i>0)
            {
            temp=arr[i]*2+rem;
            rem=0;

            if(temp<10)
                arr[i]=temp;
            else{
            arr[i]=temp%10;
            rem=temp/10;
            }

            i--;
            }
        }
        display();
    }
return 0;
}
