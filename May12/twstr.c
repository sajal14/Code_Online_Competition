#include<stdio.h>
int main()
{
    int n,y,t;
  scanf("%d",&t);
  while(t--)
  {
   scanf("%d",&n);
   for(y=0;;y++)
   {
     if((n-(4*y))%7==0){
     printf("%d\n",n-(4*y));
     break;
      }
     else if((n-(4*y))<0){
     printf("-1\n");
     break;
     }
   }
    }
  return 0;
  }
