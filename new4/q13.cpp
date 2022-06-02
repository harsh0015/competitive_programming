#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;

		ll arr[n];

		for(ll i=0;i<n;i++)cin >>arr[i];

		vector<ll >v;

	v.push_back(arr[0]);

	for(ll i=1;i<n-1;i++){
      if(ll((arr[i]-arr[i-1])*(arr[i]-arr[i+1]))>0)v.push_back(arr[i]);
	}


v.push_back(arr[n-1]);

cout <<v.size()<<endl;

for(ll i=0;i<v.size();i++)cout <<v[i]<<" ";

cout <<endl;
	}
}