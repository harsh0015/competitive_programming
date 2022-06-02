#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main(){

	ll t;cin >>t;

	while(t--){

		ll a,b,c;cin >>a>>b>>c;

		ll x=c/a;
		ll r=c%a;
		if(r==0){r=a;x--;}

		ll ans=b*(r-1)+ x+1;

		cout <<ans<<endl;
	}
}