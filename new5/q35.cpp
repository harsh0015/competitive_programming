#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;
		
		ll i=0;
		long long r;

		for(i=0;i<1000;i++){
			ll c=1;
			for(ll j=0;j<=i;j++)c=c*2;
             
			if(c>=n){r=c;
				break;}
		}

		if(r==n)cout << n-1<<endl;

		else cout <<r/2-1<<endl;
	}
}