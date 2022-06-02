#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
	ll t;cin >>t;

	while(t--){
		ll n,k;cin >>n>>k;

		ll arr[n+1];
		for(ll i=1;i<n+1;i++)
			cin >>arr[i];

		unordered_map<ll ,ll > m;

		for(ll i=1;i<n+1;i++){
			if(m.find(arr[i])==m.end()){
				ll count=0;
				for(int j=1;j<=n;j++){
                if(arr[j]!=arr[i]){
                	count ++;
                	j=j+k-1;
                }
				}
				m[arr[i]]=count;
			}
		}

		ll min=1000000;

		for(auto i:m){
			if(i.second<min)
				min=i.second;
		}
    cout <<min<<endl;
	}
}