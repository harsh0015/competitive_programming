#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll M=500000+1;
vector<vector<int>>v(M);

void pre(){
	for(ll i=1;i<M;i++){
		for(ll j=i;j<M;j+=i){
			v[j].push_back(i);
		}
	}
}

int main(){

	ll t;cin >>t;
	pre();
  cout <<"j";
	while(t--){

		ll n,m;cin >>n>>m;

		ll res=0;

		for(ll i=2;i<=n;i++){
			ll x=m-m%i;

			if(x>0){
				res=res+lower_bound(v[x].begin(), v[x].end(),i)-v[x].begin();
			}
			else res=res+i-1;
		}

		cout <<res<<endl;
	}
}