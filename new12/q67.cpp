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
     
   int n;cin>>n;
   vector<vector<int>>queries;
   vector<int>ans;
   int par[500001];
  for(int i=1;i<500001;i++)par[i]=i;

   while(n--){
     int k;cin>>k;
     if(k==1){
        int x;cin>>x;
        queries.push_back({x});
     }
     else{
        int x,y;cin>>x>>y;
         queries.push_back({x,y});
     }
   }

   reverse(queries.begin(), queries.end());

   for(auto q:queries){
    if(q.size()==1){
       ans.push_back(par[q[0]]);
    }
    else{
        par[q[0]]=par[q[1]];
    }
   }
   

   reverse(ans.begin(), ans.end());

   for(int i=0;i<ans.size();i++)cout <<ans[i]<<" ";

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