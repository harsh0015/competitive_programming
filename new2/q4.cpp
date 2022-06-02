#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define maxn 100007
#define ll int64_t
#define br '\n'
#define pb push_back
#define mod1 1000000007
#define mod 998244353
#define INF  0x3f3f3f3f
#define limit 1e18
void solve()
{
	ll n;
	cin>>n;
	vector<ll>a(10,1);
	ll ans=1;
	ll i=0;
	while(ans<n)
	{
		ans/=a[i];
		a[i]++;
		ans=ans*a[i];
		i=(i+1)%10;
	}
	string s="codeforces";
	for(ll i=0;i<10;i++)
	{
		while(a[i]--)
		{
			cout<<s[i];
		}
	}
	cout<<br;
}
 int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
}
