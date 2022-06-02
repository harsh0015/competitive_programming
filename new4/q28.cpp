#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

	ll n;cin >>n;

	vector<pair<ll ,ll>>v;

	for(int i=0;i<n;i++){
		pair<ll ,ll>p;
		cin >>p.first>>p.second;

		v.push_back(p);
	}
if(n==1 || n==2){
	cout <<n<<endl;
	return 0;
}
	sort(v.begin(), v.end());

	ll arr[n];

  for(ll i=1;i<n;i++){
  	arr[i]=v[i].first -v[i-1].first;
  }



	ll count=2;

	for(ll i=1;i<n-1;i++){
      if(v[i].second<arr[i]){
      	count++;
      	continue;
      }
      if(v[i].second<arr[i+1]){
      	count++;
      	arr[i+1]=arr[i+1]-v[i].second;
      }

	}

	cout <<count;
}
// 1
// 1000000000 1000000000