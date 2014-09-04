#include <iostream>
#include <map>
#include<string>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;

int string_comp(string s1,string s2)
{
    int i=0;
    while(s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
            return 0;

        i++;
    }
    return 1;
}
int main ()
{
vector< pair < int,string > > v1;
 pair<int,string> p1;
  vector<pair<int,string> >::iterator it;

    int t,q,p,flag;
    string s;
    scanf("%d",&t);
    int i=0,pos=-1;
    while(t--)
    {
        cin>>s;
        scanf("%d",&p);
        p1.first=p;
    p1.second=s;
    v1.push_back(p1);
    }
 sort(v1.rbegin(),v1.rend());
    scanf("%d",&q);
   while(q--)
    {
        cin>>s;
        pos=0,flag=0;
            for(it=v1.begin();it!=v1.end();it++)
            {
                pos = string_comp(it->second,s);
                if(pos)
                    {
                        flag=1;
                        cout<<it->second<<"\n";
                        break;
                    }
            }

        if(!flag)
            printf("NO\n");
    }
  return 0;
}

