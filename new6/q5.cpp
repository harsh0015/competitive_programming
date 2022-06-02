#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll solve(ll n){

	if(n%2==0)return 2;

	for(ll i=3;i*i<=n;i=i+2){
		if(n%i==0)return i;
	}

	return n;
}

int main(){

	ll n;cin >>n;
	ll p=solve(n);

	if(p%2==1)
	cout<<1+ (n-p)/2;

else cout <<n/p;
}