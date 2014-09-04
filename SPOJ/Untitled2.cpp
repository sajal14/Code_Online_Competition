#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;
 map<int,int> m1;

 int main()
 {
     int n,t,a,i;
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
         scanf("%d",&a);
        m1[a]=1;

     }
     scanf("%d",&t);
     while(t--)
     {
         scanf("%d",&a);
         if(m1[a*a])
            printf("YES\n");
        else
            printf("NO\n");
     }
     return 0;
 }
