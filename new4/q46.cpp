#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main(){

	int t;cin >>t;

	while(t--){

		ll n;cin >>n;

		unordered_map<ll ,ll> m;

		for(ll i=0;i<n;i++){
			ll a;cin >>a;

			m[a]++;
		}

		vector<ll >v;

		for(auto i:m){
			v.push_back(i.second);
		}

		sort(v.begin(), v.end());

		if(v.size()==1){
			cout<<v[0]<<endl;
			continue;
		}


		ll ma=v[v.size()-1];

		ll sum=0;

		for(ll i=0;i<v.size()-1;i++)sum=sum+v[i];

		if(ma<=sum){
			// cout <<"*";
			// cout <<sum<<"*"<<ma<<endl;
			if((sum-ma) %2==0)cout <<0<<endl;
			else cout <<1<<endl;

		}
	    else {
            cout<<ma-sum<<endl;
	    }
	}
}