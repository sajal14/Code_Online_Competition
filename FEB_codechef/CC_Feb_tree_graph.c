#include<iostream>

using namespace std;
int main()
{
  int rd[10000];
  bool flag1=true,flag2=true;
  int n,e;
  cin>>n>>e;

  for(int i=0;i<e;i++)
  {
    int t1,t2;
    cin>>t1>>t2;
    rd[t2-1]+=1;
    if(rd[t2-1]>1)
    {
      cout<<"NO";
      return 0;
    }
  }
  for(int i=0;i<n;i++)
  {
    if(rd[i]==0 && flag1)
    flag1=false;
    else
    if(rd[i]==0 && !flag1)
     flag2=false;
  }
  if(flag2 && !flag1)
  cout<<"YES";
  else
  cout<<"NO";
return 0;
}
