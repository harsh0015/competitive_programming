#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    	ll n;cin>>n;

    	unordered_map<ll,ll>m;
    	ll k=-10000000000;

    	for(ll i=0;i<n;i++){
    		ll x;cin>>x;

    		m[x-i]=m[x-i]+x;
            k=max(k,m[x-i]);
    	}

    	cout <<k<<endl;
    }
	