#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;cin>>t;

	while(t--){
		ll n;cin>>n;

	vector<ll>m[n+1];
        ll arr1[n],arr2[n];
		for(ll i=0;i<n;i++){
         cin>>arr1[i];
		}
		for(ll i=0;i<n;i++){
         cin>>arr2[i];
		}

		vector<vector<int>>v;

		for(ll i=0;i<n;i++){
			m[arr1[i]].push_back(arr2[i]);
		}

		for(ll i=1;i<n+1;i++){
			if(m[i].size()>0)m[i].push_back(0);

			sort(m[i].begin(),m[i].end());
		}

		for(ll i=1;i<n+1;i++){
			for(ll j=1;j<m[i].size();j++){
              m[i][j]=m[i][j]+m[i][j-1];
			}
		}

		// for(ll i=1;i<n+1;i++){
		// 	for(ll j=0;j<m[i].size();j++)
		// 		cout <<m[i][j]<<" ";

		// 	cout <<endl;
		// }

	// 	for(ll i=0;i<n;i++){
	// 		m[arr1[i]].push_back(arr2[i]);
	// 	}


	// 	vector<vector<int>>v;

	// 	for(int i=0;i<n+1;i++){
	// 		if(m[i].size()>0)
	// 			v.push_back(m[i]);
	// 	}

	// 	cout <<v.size()<<endl;

		// for(auto&i:m){
		// 	// cout <<"*"<<i.first<<endl;
		// 	i.second.push_back(0);
		// 	// cout <<"&"<<i.second.size()<<endl;
		// 		sort(i.second.begin(), i.second.end());
		// 	for(ll k=1;k<i.second.size();k++){
  //              i.second[k]=i.second[k]+i.second[k-1];
  //              // cout <<i.second[k]<<" ";
		// 	}
		
		// }

		// // for(auto i:m){
			
		// // }

		// // for(auto i:m){
		// // 	for(int k=0;k<i.second.size();k++){
  // //              cout <<i.second[k]<<" ";
		// // 	}
		// // 	cout <<endl;
		// // }



		for(ll i=1;i<=n;i++){
			ll sum=0;
			for(ll j=1;j<n+1;j++){
				if(m[j].size()>0){
			
				ll y=(m[j].size()-1)%i;
		
				sum=sum +m[j][m[j].size()-1]-m[j][y];
				}
			}
			cout <<sum<<" ";
		}
		cout <<endl;
	}
}