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
 
 ///
void solve(){
         
         ll n;cin>>n;
         vector<ll>v(n);
         for(ll i=0;i<n;i++)cin>>v[i];

          ll g=v[0];
      for(ll i=1;i<n;i++){
        g=__gcd(g,v[i]);
      }
   
      for(ll i=0;i<n;i++)v[i]=v[i]/g;

  set<ll>facts;

  for(ll j=0;j<2;j++){
     ll mi=v[j];
for(ll i=1;i*i<=mi;i++){
    if(mi%i==0){
        facts.insert(i);
        facts.insert(mi/i);
    }
}
  }


vector<ll>fact;
for(auto i:facts)fact.push_back(i);

sort(fact.begin(), fact.end());

reverse(fact.begin(), fact.end());


  for(auto i:fact){
    
      ll count=0;

      for(ll j=0;j<n;j++){
        if(v[j]%i!=0)count++;
      }
      if(count==1){
       g=g*i;
       for(ll j=0;j<n;j++){
        if(v[j]%i==0)
             v[j]=v[j]/i;
       }
       
      }
  }

   cout <<g<<endl;
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