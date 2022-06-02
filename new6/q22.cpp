#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;cin>>t;

	while(t--){

		ll n,k;cin>>n>>k;

		vector<ll>v;


		for(ll i=0;i<n;i++){
			ll x;cin>>x;

			if(x%k!=0)v.push_back(x%k);
		}
		if(v.size()==0){
			cout <<0<<endl;
			continue;
		}
      
   

      for(int i=0;i<v.size();i++)cout <<v[i]<<" ";

      	cout <<endl;

      unordered_map<ll ,ll>m;

  for(ll i=0;i<v.size();i++)m[v[i]]++;

  	ll a=-1,b=-1;
   for(auto i:m){
   	if(i.second>a){
   		a=i.second;
   		b=i.first;
   	}
   	else if(a==i.second){
   		if(i.first<b)
   			b=i.first;
   	}
   }
  // cout <<a<<" "<<b<<endl;

  cout <<k*(a-1)+1 +k-b<<endl;


	}
}