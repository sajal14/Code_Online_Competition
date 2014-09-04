#include<iostream>
#include<stdio.h>
#define FOR(i,a)	for(long long i=0;i<t;i++)
#define REP(i,a,b)	for(long long i=a;i<b;i++)
#define SHIFT 500000

using namespace std;

long long ans[100001],diff[100001]={0};
void solve();
void compute();
long long count(long long,long long);

int main()
{
	compute();
	long long t;
	cin>>t;
	FOR(i,t)	solve();
	return 0;
}

long long count(long long num,long long digit)
{
	long long ans=0;
	while(num)
	{
		if(num%10==digit)
			ans++;
		num=num/10;
	}
	return ans;
}

void solve()
{
	long long n;
	scanf("%lld",&n);
	printf("%lld\n",ans[n]);
}

void compute()
{
	ans[1]=1;
	ans[2]=3;
	ans[3]=6;
	diff[0]=4;
	long long d=0;
	REP(i,4,100001)
	{
		d=d+count(i,4)-count(i,7);
		/*if(i==44777)
		{
			cout<<d<<"\n";
			break;
		}*/
		ans[i]=ans[i-1]+diff[d];
		diff[d]++;
	}
}
