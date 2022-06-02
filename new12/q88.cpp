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

ll n,k;
 vector<ll>distace(200000,0);
vector<bool>visited(200000,false);
vector<bool>visited1(200000,false);
 vector<ll>children(200000,0);
   vector<vector<ll>>adj(200000);
     vector<ll>assign(200000,1);
   ll ans;
  

 ll dfs(ll x ,ll dis){
     visited[x]=true;
     ll count=0;
     for(auto i:adj[x]){

        if(!visited[i]){
            count=count+1+dfs(i,dis+1);
        }
     }

   distace[x]=dis;

    return children[x]=count;
 }

void dfs1(ll x,ll value){
    visited1[x]=true;
    
    for(auto i :adj[x]){
        if(!visited1[i]){
            if(assign[i]==0){
                ans=ans+value*(1+children[i]);    
            }
            else{
                dfs1(i,value+1);
            }
        }
    }


}
 bool cmp(vector<ll>v1,vector<ll>v2){
    if(v1[0]==v2[0])return v1[2]>=v2[2];
    return v1[0]<v2[0];
 }
 ///
void solve(){
     
  cin>>n>>k;
 

  for(ll i=0;i<n-1;i++){
    ll a,b;cin>>a>>b;
    a--;b--;

    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  dfs(0,0);

  vector<vector<ll>>vals;



  for(ll i=0;i<n;i++)vals.push_back({children[i],i,distace[i]});

  sort(vals.begin(), vals.end(),cmp);

  for(ll i=0;i<k;i++){
        assign[vals[i][1]]=0;
  }
   
   if(assign[0]==0){
    cout <<0<<endl;
    return;
   }
   ans=0;
   dfs1(0,1);

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