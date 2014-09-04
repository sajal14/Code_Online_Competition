#include<iostream>
#include<cstring>
#include<string>
using namespace std;

 string str[1000000];

int main()
{
    int t,len,i,plen,cnt,j;
    size_t pos,k;
    string s;

    cin>>t;

 while(t--)
 {
     cnt=0;
     cin>>s;
     cin>>k;
     len=s.size();
     for(pos=0,i=0;pos<=len-k;pos=pos+k,i++)
        {
            str[i]=s.substr(pos,k);
        }

    plen=i;

    for(i=0;i<plen;i++)
    {
        for(j=i+1;j<plen;j++)
            if (str[i].compare(str[j])==0)
                str[j].assign("0");
    }

for(i=0;i<plen;i++)
    if(str[i].compare("0")!=0)
        cnt++;
    cout<<cnt<<"\n";

 }

return 0;
}
