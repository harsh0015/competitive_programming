#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

	ll n,k;cin >>n>>k;

	ll arr[n+1];
	arr[0]=0;

	for(ll i=1;i<n+1;i++)cin >>arr[i];

		sort(arr,arr+n+1);

	ll arr2[n+1];

	for(ll i=1;i<=k;i++)
		arr2[i]=arr[i];

	for(ll i=k+1;i<n+1;i++)
		arr2[i]=arr[i]+arr2[i-k];

	ll dp[n+1];

	dp[1]=arr[1];

	for(ll i=2;i<n+1;i++)dp[i]=dp[i-1]+arr2[i];


	for(ll i=1;i<n+1;i++)cout <<dp[i]<<" ";
}