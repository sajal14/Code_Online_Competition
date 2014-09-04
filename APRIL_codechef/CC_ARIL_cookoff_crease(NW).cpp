#include <string>
#include <algorithm>
#include <iostream>
#include<stdio.h>
#include<list>
#include<map>
using namespace std;

int main()
{
    map<int, map<int, int> > mymap;
     map<int,int>::iterator it;
    int t,d,x,y,i,cnt;
    char c;
    scanf("%d",&t);
   // printf("%d",t);
    x=0,y=0;
    mymap.erase(mymap.begin(),mymap.end());
    while(t--)
    {
       cin>>c>>d;
        if(c=='R')
        {
            cnt=0;
            for(i=1;i<=d;i++)
            {
                if(!mymap[x+1][y])
                   {
                       mymap[x+1][y]=1;
                     cnt++;
                   }
                x++;
            }
            x--;

            printf("%d\n",cnt);
        }
        if(c=='L')
        {
            cnt=0;
            for(i=1;i<=d;i++)
            {
                if(!mymap[x-1][y])
                   {
                       mymap[x-1][y]=1;
                     cnt++;
                   }
                x--;
            }
            x++;

            printf("%d\n",cnt);
        }

    if(c=='U')
        {
            cnt=0;
            for(i=1;i<=d;i++)
            {
                if(!mymap[x][y+1])
                   {
                       mymap[x+1][y]=1;
                     cnt++;
                   }
                   y++;

            }
            y--;
            printf("%d\n",cnt);
        }

    if(c=='D')
        {
            cnt=0;
            for(i=1;i<=d;i++)
            {
                if(!mymap[x][y-1])
                   {
                       mymap[x][y-1]=1;
                     cnt++;
                   }
                   y--;

            }
            y++;
            printf("%d\n",cnt);
        }


    }
    return 0;
}
