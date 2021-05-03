#include <bits/stdc++.h>
using namespace std;

const int maxn =500+10;
int n,m,dp[maxn][maxn],y[maxn][maxn],b[maxn][maxn];

int main(){
	int x;
	while(cin>>n){
		if(n==0) break;
		cin>>m;

		memset(dp,0,sizeof(dp));
		memset(y,0,sizeof(y));
		memset(b,0,sizeof(b));

		for (int i = 1; i <= n ;++i)
		{
			for (int j = 1; j <=m ; ++j)
			{
				cin>>x;
				y[i][j]=y[i][j-1]+x;
			}
		}
		for (int i = 1; i <= n ; ++i)
		{
			for (int j = 1; j <=m ; ++j)
			{
				cin>>x;
				b[i][j]=b[i-1][j]+x;
			}
		}
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m ; ++j)
			{
				dp[i][j]=max(dp[i-1][j]+y[i][j],dp[i][j-1]+b[i][j]);
			}
		}
		cout<<dp[n][m]<<'\n';
	}
	return 0;
}
