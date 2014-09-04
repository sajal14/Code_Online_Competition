#include <stdio.h>
#define SWAP(a,b) a^=b^=a^=b;

int arr[10];
int main()
{
    int i,j;
    int n,b,cnt=0,tmp;
  scanf("%d",&n);
    while(n!=0)
  {
       for(i=0;i<10;i++)
        arr[i]=0;

        scanf("%d",&b);
        if(n>b)
            SWAP(n,b);
    for(i=n;i<=b;i++)
     { tmp=i;
     while(tmp)
     { j=tmp%10;
        tmp=tmp/10;
        arr[j]++;
     }
     }
      cnt++;
      printf("Case %d: ",cnt);
      for(i=0;i<=9;i++)
       printf("%d:%d ",i,arr[i]);
       printf("\n");

       scanf("%d",&n);
        }
return 0;
}
