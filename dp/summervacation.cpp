#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input4.txt","r",stdin);
	freopen("output4.txt","w",stdout);
	long long n;
	cin>>n;
	vector<long long> dp(4);
	for(int i = 0; i < n; ++i)
	{
		long long a, b, c, d;
		cin>>a>>b>>c>>d;
		vector<long long> new_dp(4);
		new_dp[0] = a + max(dp[1],max(dp[2],dp[3]));
		new_dp[1] = b + max(dp[0],max(dp[2],dp[3]));
		new_dp[2] = c + max(dp[0],max(dp[1],dp[3]));
		new_dp[3] = d + max(dp[0],max(dp[1],dp[2]));
		dp = new_dp;
	}
	long long res = dp[0];
	for(int i=1;i<4;i++)
		res = max(res,dp[i]);
	cout<<res<<'\n';
}
