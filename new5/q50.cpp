#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll val(int n){

	ll x=1;

	for(ll i=0;i<n;i++){
		x=x*2;
	}
	return x;
}

ll solve(ll n){
  
  ll r=0;
  for(ll i=0;i<10000;i++){
    if(n>=val(i) && n<val(i+1)){
       r=i;
       break;
    }
  }
  return r;

}

int main(){

	ll t;cin >>t;

	while(t--){

		ll n;cin>>n;

		ll arr[n];
		for(ll i=0;i<n;i++)cin>>arr[i];

		map<ll,ll> m;

	    for(ll i=0;i<n;i++){
	    	m[solve(arr[i])]++;
	    }

      ll ans=0;

      for(auto i:m){
      	if(i.second>=2){
      		ans=ans+ (i.second*(i.second-1))/2;
      	}
      }

      cout<<ans<<endl;
	}
}