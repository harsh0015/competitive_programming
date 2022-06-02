#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ceel(x, y) ((x) / (y) + !((x) % (y) == 0))
#define ff first
#define ss second
#define endl '\n'
#define print(v) for(auto x : v) cout << x << ' '; cout << endl;
#define debug(v) cout << #v << " = "; print(v);
#define printmp(v) for(auto x : v) cout << x.first << ' ' << x.second << endl; cout << endl;
using namespace std;
typedef long long int ll;
typedef long double ld;

void solve(){
 ll n;cin>>n;

 vector<pair<ll,ll>>v;
 ll count=0;

 for(ll i=0;i<n;i++){
    ll x;cin>>x;
    v.push_back({x,i+1});
 }

 sort(v.begin(), v.end());

 for(ll i=0;i<n;i++){
    for(ll j=i+1;j<n;j++){
        ll l=v[i].second+v[j].second;
        ll r=v[i].first*v[j].first;
        if(l==r)count++;
        if(r>2*n)break;
    }
 }

 cout <<count<<endl;
 
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}