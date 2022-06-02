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
    string s;cin>>s;

    ll arr[n+1];

    for(ll i=0;i<n;i++){
        arr[i+1]=s[i]-'0';
    }
    map<ll,ll>m;

    ll pre[n+1];
    pre[0]=0;
    for(ll i=1;i<n+1;i++)pre[i]=pre[i-1]+arr[i];

  for(ll i=0;i<n+1;i++){
    m[pre[i]-i]++;
}

ll ans=0;
for(auto i:m){
  ll x=i.second;
  ans=ans+ (x*(x-1))/2;
}

cout <<ans<<endl;

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