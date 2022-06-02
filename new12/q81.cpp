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
const ll mod = 1e9 + 7, inf = 1e18;
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


ll fact(ll n){
    if(n==0)return 1;

    ll c=1;
    for(ll i=1;i<n+1;i++)c=(c*i)%mod;

    return c;
}
 
 ///
void solve(){
     
    ll n;cin>>n;
    vector<ll>v(n+1);
    for(ll i=1;i<n+1;i++)cin>>v[i];

    vector<ll>m(n+1,0);

     vector<bool>done(n+1,false);
     ll con=0;

     for(ll i=1;i<n+1;i++){
        if(v[i]!=0){
            done[v[i]]=true;
        }
        else{
           m[i]=1;
        }
     }
     ll count=0;
     for(ll i=1;i<n+1;i++){
        if(!done[i]){
             con++;
            if(m[i])count++;
        }
     }
     
     if(con==0){
        cout <<0<<endl;
        return;
     }

     ll ans=0;

     ll r=con;

     ll C[r+1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1; 
    for (ll i = 1; i <= r; i++)
    {
        for (ll j = i; j > 0; j--)
        {
            C[j] = (C[j] + C[j-1])%mod;
        }
    }

    ll fact[r+1];
    fact[0]=1;
    for(ll i=1;i<r+1;i++)fact[i]=(fact[i-1]*i)%mod;


     for(ll i=0;i<=count;i++){
         if(i%2==0){
            ans=(ans+(C[i]*fact[r-i])%mod)%mod;
         }
         else{
            ans=( mod + ans - (C[i]*fact[r-i])%mod)%mod;
         }
     }
    cout <<ans<<endl;
}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}