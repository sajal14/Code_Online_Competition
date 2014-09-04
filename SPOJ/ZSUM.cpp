#include<iostream>
#define M 10000007

using namespace std;

void solve(long long ,long long);
long long c(long long,long long);

int main()
{
	long n,k;
	cin>>n>>k;
	while(n&&k)
	{
		solve(n,k);
        cin>>n>>k;
	}
	return 0;
}

void solve(long long n,long long k)
{
	long long ans=(2*c(n-1,k)+c(n,k)+c(n,n)+2*c(n-1,n-1))%M;
	cout<<ans<<"\n";
}

long long c(long long n,long long k)
{
	long long p=1,p1=n;
	while(k)
	{
		if(k%2)
			p=(p*p1)%M;
		p1=(p1*p1)%M;
		k=k/2;
	}
	return p;
}
