#include <bits/stdc++.h>
#define ll  long long
#define ld long double
#define ii pair <int,int>
#define F first
#define S second
#define pb push_back
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(),x.end()
	
using namespace std;
const int N = 1e6+5;
const long long  INF = 1e9+5;
const int  mod = 1e9+7;
 
 
 
void _clear(){

}


map<long long,long long> cnt;
void solve(){ 
	int n ;
	cin >>n ;
	vector<long long > a(n),b(n);
	for(auto &x : a)
		cin >> x;
		
	for(auto &x : b)
		cin >> x;
	
	for(auto i:a)cout <<i<<" "<<endl;

		for(int i =0 ;i < n;i++){
		cout <<a[i]<<endl;
		cnt[a[i]]++;
	}
	
	bool q=0;
	ll num =0;
	vector<ll>have;
	for(auto x : cnt){
		 cout <<x.first<<" "<<x.second<<endl;
		 		if(x.S >= 2){
			q=1;
			have.pb(x.F);
		}
	}


	
	if(!q){
		cout << 0;
		return;
	}		
	
	
	ll ans = 0;
	for(ll i =0 ;i < n;i++){
		int bad =0 ;
		for(long long x : have){		
			bool ok = 0;
			for(ll j =0 ; j < 60;j++){
				if( ((1LL << j) & a[i]) == 0 )
					continue;
				
				if(((1LL << j) & x)== 0){
					ok=1;
					break;
				}
			}
			bad += ok;
		}
		// cout << i << " " << bad << endl;
		ans += ( bad  != (int)have.size() ? b[i] : 0 );
	}
			
	cout << ans << '\n';
}		
 
int32_t main(){
	IOS;
  int t=1;
	// cin >> t;
  while(t--){
      solve();
  	_clear();
  }
}