#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

	ll n,q,k;cin >>n>>q>>k;

	ll arr[n];
	ll dp[n+1];
dp[0]=0;
	
for(ll i=0;i<n;i++)cin >>arr[i];
	for(int i=1;i<n+1;i++){
        dp[i]=dp[i-1]+2*(arr[i]-arr[i-1]-1);
	}

// for(int i=0;i<n;i++)cout <<dp[i]<<" ";

	// 

	for(ll i=0;i<q;i++){

		ll a,b;cin >>a>>b;

		ll count=dp[b-1]-dp[a-1]+arr[a-1]-1+k-arr[b-1];

	

		cout <<count<<endl;
	}
}