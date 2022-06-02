#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<long long int>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
using vpll =vector<pair<ll,ll>>;
const ll mod = 998244353, inf = 1e18;
#define pb push_back
#define pp pop_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)

 ll qpow(ll x,ll k){
    ll res=1;
    while(k){
        if(k&1)res=res*x%mod;
        x=x*x%mod;
        k>>=1;
    }
    return res;
}
 
 ///
void solve(){
     
   ll n;cin>>n;

   vector<ll>v;
   


   vector<ll>v1(n),v2(n);

   for(ll i=0;i<n;i++)cin>>v1[i];
   for(ll i=0;i<n;i++)cin>>v2[i];

    for(ll i=0;i<n;i++){
    ll x= (i+1)*(n-i);
    v.push_back(x*v1[i]);
   }
  sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());

    reverse(v2.begin(), v2.end());

    ll ans=0;


    for(ll i=0;i<n;i++){
        ans=(ans+ (v[i]%mod*v2[i])%mod)%mod;
    }

    cout <<ans<<endl;


}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}