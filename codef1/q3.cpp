#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

	ll t;cin >>t;

	while(t--){

		ll n,k;

		cin >>n>>k;

		ll arr[n];

		for(ll i=0;i<n;i++)
			cin >>arr[i];

		bool flag=true;

		for(ll i=0;i<n-1;i++){
			if(abs(arr[i]-arr[i+1])>=2*k-1)
				flag=false;
		}

		if(flag) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
}