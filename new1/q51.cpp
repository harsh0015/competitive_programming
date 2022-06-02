#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

	ll t;cin >>t;

	while(t--){

		ll n,k;cin >>n>>k;
     
     vector<ll >v;
     ll s=min(k,ll(sqrt(n)));
     for(ll i=1;i<=s;i++){
     	if(n%i==0){
     		v.push_back(i);

     		if(n/i !=i)v.push_back(n/i);
     	}
     }

     sort(v.begin(),v.end());
    ll ans;
     for(ll i=v.size()-1;i>=0;i--){
    if(v[i]<=k){
    	ans=v[i];
    	break;
     }
    }
   
   cout <<n/ans<<endl;
	}
}