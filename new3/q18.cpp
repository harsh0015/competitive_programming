#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

	int t;cin >>t;

	while(t--){

		ll n,k;cin >>n>>k;

		ll arr[k];

		for(ll i=0;i<k;i++)cin >>arr[i];

		for(ll i=0;i<n;i++){

			string s;cin >>s;

			ll score=0;

			for(ll i=0;i<k;i++){
				if(s[i]=='1')score=score+arr[i];
			}

			cout << score<<endl;
		}
	}
}