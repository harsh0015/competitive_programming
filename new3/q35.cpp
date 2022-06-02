#include<bits/stdc++.h>
using namespace std;

typedef  long long int ll;

int main(){

	ll t;cin >>t;

	while(t--){
		ll n;cin >>n;

		if(n%2==1){
			cout <<"YES"<<endl;
			continue;
		}

		else {

			bool flag=false;

			while(n%2==0){
				n=n/2;
			}

			if(n!=1){
				cout <<"YES"<<endl;
			}
			else cout <<"NO"<<endl;
		}
	}
}