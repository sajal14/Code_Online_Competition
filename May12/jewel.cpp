
#include <iostream>
#include <map>
#include<stdio.h>
using namespace std;

int main ()
{
  map<char,int> mymap;
  map<char,int>::iterator it;

    char j[101];
    char s[101];

   int t,cnt,i;
   scanf("%d",&t);
   while(t--)
   {
       mymap.erase(mymap.begin(),mymap.end());
       scanf("%s",j);
       int i=0;
       while(j[i]!='\0')
       {
           mymap[j[i]]=1;
           i++;
       }
       scanf("%s",s);
       i=0,cnt=0;
       while(s[i]!='\0')
       {
           if(mymap[s[i]])
            cnt++;
           i++;
       }
    printf("%d\n",cnt);
   }
  return 0;
}

