# include <bits/stdc++.h>
# define ll long long
# define ld long double 
# define pb push_back
ll const mod = 1e9 + 7;
using namespace std;
 
void solve(){
	ll n;
	cin >> n;
	
	map <ll, ll> mp;
	
	for (ll i = 0; i < n; i++){
		ll x;
		cin >> x;
		mp[x]++;
	}
	
	priority_queue <ll> pq;
	
	for (auto x : mp){
		pq.push(x.second);
	}
	
	ll remove = 0;
 
	while (pq.size() >= 2){
		ll x = pq.top();
		pq.pop();
		ll y = pq.top();
		pq.pop();
		
		x--, y--;
		remove += 2;
		
		if (x > 0){
			pq.push(x);	
		}
		if (y > 0){
			pq.push(y);	
		}
	}
	
	cout << n - remove << endl;
}
 
 
int main(){
	int t = 1;
	//std::cout << std::fixed;
	//std::cout << std::setprecision(50) << ans;
	cin >> t;
 
 
	while (t--){
		solve();
	}
}
 