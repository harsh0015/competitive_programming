#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;
           ll arr[n];
		for(ll i=0;i<n;i++)cin >>arr[i];

		sort(arr,arr+n);
  ll a,b,c;


	 a=arr[0];
	 b=arr[n-1];

	cout <<2*abs(b-a)<<endl;
	}
}