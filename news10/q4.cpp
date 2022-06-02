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

 ll modulo(ll a, ll b, ll n){
    ll x=1, y=a; 
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % n; // multiplying with base
        }
        y = (y*y) % n; // squaring the base
        b /= 2;
    }
    return x % n;
}
 
void solve(){

ll n;cin>>n;

ll arr[2][n];

for(ll i=0;i<2;i++)
    for(ll j=0;j<n;j++)
        cin>>arr[i][j];


ll dp[n+1];

for(ll i=0;i<n;i++){
    dp[arr[0][i]]=arr[1][i];
}

ll count=0;

for(ll i=1;i<=n;i++){
  if(dp[dp[i]]==i)count++;
}

ll x=(count/2)+1;

// cout <<x<<endl;

cout <<modulo(2,x,1000000007)<<endl;


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