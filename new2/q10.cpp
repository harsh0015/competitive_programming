#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;

int main(){
	ll t;cin >>t;

	while (t--)
	{ 
		ll a, b, k;

		ll an[a+1];
		ll bn[b+1];
		cin >> a >> b >> k;
		for (ll i =1; i <= a; i++) an[i] = 0;
		for (ll i =1; i <= b; i++) bn[i] = 0;
		for (ll i = 1; i <= k; i++)
		{
			ll num; cin >> num;
			an[num]++;
		}
		for (ll i = 1; i <= k; i++)
		{
			ll num; cin >> num;
			bn[num]++;
		}
		ll total = (ll) k * (k - 1) / 2;
		for (ll i = 1; i <= a; i++)
			total -= (ll) an[i] * (an[i] - 1) / 2;
		for (ll i = 1; i <= b; i++)
			total -= (ll) bn[i] * (bn[i] - 1) / 2;
		cout << total << '\n';
	}
}