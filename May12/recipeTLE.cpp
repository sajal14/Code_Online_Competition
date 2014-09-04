#include <iostream>
#include <map>
#include<string>
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
  map<int,string> mymap;
  map<int,string>::iterator it;
    int t,q,p,flag;
    string s;
    scanf("%d",&t);
    int i=0,pos=-1;
    while(t--)
    {
        cin>>s;
        scanf("%d",&p);
       mymap[p]=s;
    }
    /*
it=mymap.end();
it--;
for(it;it!=mymap.begin();it--)
    cout<<(it->first)<<" "<<it->second<<"\n";
cout<<(it->first)<<" "<<it->second<<"\n";*/
    scanf("%d",&q);
   while(q--)
    {
        cin>>s;
        it=mymap.end();
        it--;
        pos=0,flag=0;
        for(it;it!=mymap.begin();it--)
        {
            pos=string_comp(it->second,s);
            if(pos)
            {
                flag=1;
                    cout<<it->second<<"\n";
                    break;
            }


        }
        if(!flag)
        {
           pos=string_comp(it->second,s);
            if(pos)
                {
                    flag=1;
                    cout<<it->second<<"\n";

                }
        }
        if(!flag)
            printf("NO\n");
    }
  return 0;
}

