#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

	ll n;cin >>n;

	ll arr[n];

	for(ll i=0;i<n;i++)cin >>arr[i];

	sort(arr,arr+n);

	ll a=0;
	ll b=0;

	for(ll i=0;i<n;i++){
		if(arr[i]==arr[0])a++;
		if(arr[i]==arr[n-1])b++;
	}

	if(arr[0]==arr[n-1])cout <<0<<" "<<(a*(a-1))/2;

	else cout <<arr[n-1]-arr[0]<<" "<<a*b;
}