// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll countTriangles(vector<pair<ll,ll>>P, ll N)
{
	
	map<pair<ll, ll>, ll> mp;
	ll ans = 0;

	
	for (ll i = 0; i < N; i++) {
		mp.clear();

		
		for (ll j = i + 1; j < N; j++) {
			ll X = P[i].first - P[j].first;
			ll Y = P[i].second - P[j].second;

		
			ll g = __gcd(X, Y);
			X /= g;
			Y /= g;
			mp[{ X, Y }]++;
		}
		ll num = N - (i + 1);

		
		ans += (num * (num - 1)) / 2;

		
		for (auto j : mp)
			ans -= (j.second * (j.second - 1)) / 2;
	}
	return ans;
}


int main()
{   ll n;cin>>n;
	vector<pair<ll,ll>>v;
	for(ll i=0;i<n;i++){
		ll a,b;cin>>a>>b;
		v.push_back({a,b});
	}
	
	cout << countTriangles(v,n) << endl;
	return 0;
}
