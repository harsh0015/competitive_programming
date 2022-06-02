#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;

		ll arr[n+1];

		for(ll i=1;i<n+1;i++)cin >>arr[i];

		ll cost=100000000000000000;
	ll sum[n+1];

	sum[1]=arr[1];
	sum[2]=arr[2];

	for(ll i=3;i<n+1;i++){
		sum[i]=sum[i-2]+arr[i];
	}

	ll mino=arr[1];
	ll mine=arr[2];

	ll arr2[n+1];

	arr2[1]=arr[1];
	arr2[2]=arr[2];

	for(ll i=3;i<n+1;i++){
		if(arr[i]<arr2[i-2])arr2[i]=arr[i];
		else arr2[i]=arr2[i-2];
	}

	// for(int i=1;i<n+1;i++)cout <<sum[i]<<" ";

	// 	cout <<endl;

	// for(int i=1;i<n+1;i++)cout <<arr2[i]<<" ";

	// 	cout <<endl;

	for(ll i=2;i<n+1;i++){
		ll val=0;

		if(i%2==0){
			val=val+sum[i]+sum[i-1]+ arr2[i]*(n-(i/2 )) +arr2[i-1]*(n-i/2);
		}
		else{
			val=val+sum[i]+sum[i-1]+ arr2[i]*(n-(i/2 +1)) +arr2[i-1]*(n-i/2);
		}

		if(val<cost)cost=val;

	}

cout <<cost<<endl;
	}
}