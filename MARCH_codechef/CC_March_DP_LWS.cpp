/* Author : Vamsi Kavala */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,n) FOR(i,0,n)
#define PB push_back
#define ITER(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
#define mod 1000000007
#define MAXN 1000010

typedef pair<int,int>   PI;
typedef vector<int> VI;
typedef long long int LL;

int dp[2100][28][28];

int main(){

	int t;
	scanf("%d",&t);
	while(t--)
	{

		string s;
		cin>>s;
		s="#"+s;

		memset(dp,0,sizeof(dp));

		FOR(i,1,27)
			FOR(j,1,27)
				dp[0][i][j]=-mod;

		FOR(k,1,s.length())
		{
			REP(i,27)
				REP(j,27)
				{
                        int x=(int)s[k]-'a'+1;
                    /*Main DP Recurrence*/
					dp[k][i][j]=max(dp[k][i][j],dp[k-1][i][j]);

					if(i<=x)  //if value is greater than i(i.e ith character)
						dp[k][x][j]=max(dp[k][x][j],dp[k-1][i][j]+1);//all column is x row
					if(x<=j) //if the value is less than j then adding to decreasing
						dp[k][i][x]=max(dp[k][i][x],dp[k-1][i][j]+1);//all rows in x column
				}
		}

		int ans=-mod;
		REP(i,27)
           {printf("\n");
			REP(j,27)
				//ans=max(ans,dp[s.length()-1][i][j]);
				printf("%d ",dp[1][i][j]);
           }
    printf("\n\n");
           REP(i,27)
           {printf("\n");
			REP(j,27)
				//ans=max(ans,dp[s.length()-1][i][j]);
				printf("%d ",dp[2][i][j]);
           }
		printf("%d\n",ans);
	}
	return 0;
}
