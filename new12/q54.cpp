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
     
    ll n,m;cin>>n>>m;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];

    vector<ll>v1(m);
    for(ll i=0;i<m;i++)cin>>v1[i];

    map<ll,ll>ma;
     for(ll i=0;i<n;i++)ma[v[i]]=i;
    
    vector<ll>order(n,-1);
   for(ll i=0;i<m;i++){
        ll x=ma[v1[i]];
        order[x]=i;
   }

   ll pay=0;
   vector<bool>visited(n,false);

   ll ans=0;
   ll done=0;

   ll i=0;

  

   while(done<m ){
    if(visited[done]){
        ans++;
        done++;
        pay--;
        continue;
    }
       if(order[i]==done){
          ans+=2*pay+1;
           visited[done]=true;
          i++;
          done++;

       }
       else{
        if(order[i]!=-1)
             visited[order[i]]=true;
          pay++;
          i++;
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