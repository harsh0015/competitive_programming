#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;

		ll arr[n];
		for(ll i=0;i<n;i++)
			cin >>arr[i];

          sort(arr,arr+n);

          vector<ll> v1,v2;
           ll c=0;
          for(ll i=n-1;i>=0;i--){
          c++;

          if(c%2==1)
          {
          	v1.push_back(arr[i]);
          }

          else v2.push_back(arr[i]);
          }

          ll s1=0;ll s2=0;

          for(ll i=0;i<v1.size();i++)
          	if(v1[i]%2==0)s1=s1+v1[i];

          for(ll i=0;i<v2.size();i++)
          	if(v2[i]%2==1) s2=s2+v2[i];

          if(s1>s2)
          	cout <<"Alice"<<endl;
          if(s2>s1)
          	cout <<"Bob"<<endl;
          if(s1==s2)
          	cout <<"Tie"<<endl;

	}
}