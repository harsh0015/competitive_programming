#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
		 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
 
	ll t;cin >>t;
 
	while(t--){
 
		ll n;cin >>n;
		ll arr[n];
		for(ll i=0;i<n;i++)cin >>arr[i];
 
		ll dp[n][n];
 
	ll count=0;
 
	for(ll i=0;i<n;i++)dp[i][i]=0;
 
	for(ll i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			dp[i][i+1]=1;
			
 
		}
		else dp[i][i+1]=0;
	}
 
	for(ll i=2;i<n;i++){
		for(ll j=0;j<n-i;j++){
			if(arr[j]==arr[i+j]){
				dp[j][j+i]=1+dp[j+1][j+i]+dp[j][j+i-1];
				
				
			}
			else{
				dp[j][j+i]=dp[j+1][j+i]+dp[j][j+i-1];
 
			}
		}
	}
    
    for(ll i=0;i<n;i++){
    	for(ll j=0;j<n;j++){
    		if(i<=j)count=count+dp[i][j];
    	}
    	
    }
 
	cout <<count<<endl;
 
	}
}