#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){

	ll t;cin>>t;

	while(t--){
		ll n;cin>>n;

		ll arr[n];
		for(ll i=0;i<n;i++)cin>>arr[i];

		ll mini=10000000000;
	ll in=-1;

	for(ll i=0;i<n;i++){
		if(arr[i]<mini){
			mini=arr[i];
			in=i;
		}
	}
     
     vector<vector<ll>>ans;

     for(ll i=in;i<n-1;i++){
     	if(gcd(arr[i],arr[i+1])>1){
     		ans.push_back({in+1,i+2,arr[in],arr[i]+1});
     		arr[i+1]=arr[i]+1;
     		
     	}
     }


     for(ll i=in;i>0;i--){
     	if(gcd(arr[i],arr[i-1])>1){
     		ans.push_back({in+1,i,arr[in],arr[i]+1});
     		arr[i-1]=arr[i]+1;
     		
     	}
     }

     // for(int i=0;i<n;i++)cout <<arr[i]<<" ";

     // 	cout <<endl;
     cout <<ans.size()<<endl;
    
    for(ll i=0;i<ans.size();i++){
    	for(ll j=0;j<4;j++)
    	{
    		cout <<ans[i][j]<<" ";
    	}
    	cout <<endl;
    }

	}
}