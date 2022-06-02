#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<int,vector<int>>m;

void solve(){
	m.clear();
	ll ans=0;

	ll n;cin>>n;

	for(ll i=1;i<=n;i++){
		ll x;cin>>x;
		m[x].push_back(i);
	}


	for(auto a:m){

		ll size=a.second.size();
		ll pre[size];

		pre[size-1]=n-a.second.back()+1;

		for(ll i=size-2;i>=0;i--){
			pre[i]=pre[i+1]+n-a.second[i]+1;
		}

     	for(ll i=0;i<size-1;i++){
     		ans=ans+ a.second[i]*(pre[i+1]);
     	}
	}

	cout <<ans<<endl;
}

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;cin>>t;

    while(t--){
    	solve();
    }
	
}