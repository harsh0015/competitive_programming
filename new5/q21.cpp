#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;

		ll arr[n];

		for(ll i=0;i<n;i++){
			cin >>arr[i];
			arr[i]=arr[i]-i;
		}

		ll sum=0;

		sort(arr,arr+n);

		map<ll,ll>m;

		for(ll i=0;i<n;i++)m[arr[i]]++;

		for(auto i:m){
			if(i.second >1){
				sum=sum + (i.second *(i.second-1))/2;
			}
		}
		cout <<sum <<endl;
	}
}