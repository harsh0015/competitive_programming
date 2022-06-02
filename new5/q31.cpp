#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long int dp[5005][5005];



ll solve(vector<int >a,vector<int>b,int i,int j,int count){

	if(dp[i][j]!=-1)return dp[i][j];

	if(count==0)return 0;

	if(i==a.size()|| j==b.size()){
		dp[i][j]=INT_MAX;
		return INT_MAX;
	}

	ll ans=min(solve(a,b,i,j+1,count),abs(a[i]-b[j])+solve(a,b,i+1,j+1,count-1));
	dp[i][j]=ans;

	return ans;
}

int main(){
	
		int n;cin >>n;
		vector<int>a,b;
		int count=0;

		for(int i=0;i<5005;i++)
			for(int j=0;j<5005;j++)
				dp[i][j]=-1;

		for(int i=0;i<n;i++){
			int x;cin >>x;

			if(x==0)b.push_back(i);
			else {
					a.push_back(i);
					count++;
			}
		}
		int ans=solve(a,b,0,0,count);
		cout <<ans;

}