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

 ll n,k;cin>>n>>k;

 ll arr[n];

 for(ll i=0;i<n;i++)cin>>arr[i];

map<ll,ll>m;

for(ll i=0;i<n;i++)m[arr[i]]=i;

    ll ans=0;

sort(arr,arr+n);

for(ll i=1;i<n;i++){
   if(m[arr[i]]-m[arr[i-1]]!=1)ans++;
}

if(ans+1>k)cout <<"No"<<endl;
else cout <<"Yes"<<endl;
}


int main(){
    fastio;

    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}