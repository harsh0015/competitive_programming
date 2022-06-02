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
     
  int r,g,b;cin>>r>>g>>b;
  if(r+g<b){
    cout <<-1<<endl;
    return;
  }

  vector<int>red,green;

  string ans="";
  ans=ans+"R";
  ans=ans+"G";
  red.push_back(1);
  green.push_back(2);

 

  int cur=3;
  r--;g--;

  vector<vector<int>>par;
  par.push_back({1,2});

  while(g--){
    par.push_back({1,cur});
    ans=ans+"G";
    green.push_back(cur);
    cur++;
  }
   while(r--){
   par.push_back({2,cur});
    ans=ans+"R";
    red.push_back(cur);
    cur++;
  }

  for(int i=0;i<b;i++)ans=ans+"B";

    cout <<ans<<endl;
   
   for(int i=0;i<red.size();i++){
       if(b==0)break;

     par.push_back({red[i],cur});
       cur++;
       b--;
   }
    
     for(int i=0;i<green.size();i++){
       if(b==0)break;

      par.push_back({green[i],cur});
       cur++;
       b--;
   }

   for(int i=0;i<par.size();i++)cout <<par[i][0]<<" "<<par[i][1]<<endl; 
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