#include<bits/stdc++.h>
#define mod 1000000007
#define ___ ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
using namespace std;
lli n,m,i,j,k;
lli mini=1000000100,maxi=-1,res,sum=0;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		long int a,n,b;
		cin>>n>>a>>b;
		string s;
		cin>>s;
		lli dp[n+1][2];
		for(i=0;i<=n;i++)dp[i][0]=1e15,dp[i][1]=1e15;
		dp[0][0]=b;
		for(i=1;i<=n;i++)
		{
			if(s[i-1]=='0')
			{
				dp[i][0]=min(dp[i-1][0]+a+b,dp[i-1][1]+a*2+b);
				dp[i][1]=min(dp[i-1][1]+a+2*b,dp[i-1][0]+a*2+2*b);
			}
			else
				dp[i][1]=dp[i-1][1]+2*b+a;
		}
		cout<<dp[n][0]<<"\n";
	}
	return 0;
}