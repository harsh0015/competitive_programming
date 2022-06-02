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
const ll N=1e6+6;
vector<ll>parent(N),sz(N);

ll findSet(ll v){
  if(v==parent[v])
    return v;

  return parent[v]=findSet(parent[v]);
}

void makeSet(ll i){
    parent[i]=i;
    sz[i]=1;
}

void unionSets(ll a ,ll b){
    a=findSet(a);
    b=findSet(b);

    if(a!=b){
        if(sz[a]<sz[b])
            swap(a,b);

        parent[b]=a;
        sz[a]+=sz[b];
    }
}
 
void solve(){

for(ll i=1;i<N;i++){
    makeSet(i);
}

ll n,m;cin>>n>>m;

vector<vector<ll>>edges;

for(int i=0;i<m;i++){
    
    ll t;cin>>t;
     if(t==0)continue;
     else if(t==1){
        ll a;cin>>a;
        continue;
     }
     else{
      ll y;cin>>y;
      
      for(int i=1;i<t;i++){
        ll k;cin>>k;
         edges.push_back({y,k});
      }
     }
   
}
bool cycle=false;
for (auto i:edges)
{
    ll u=i[0];
    ll v=i[1];

    ll x=findSet(u);
    ll y=findSet(v);

    if(x==y){
cycle=true;
    }

    else{
        unionSets(u,v);
    }
}

for(int i=1;i<=n;i++){
    cout <<sz[findSet(i)]<<" ";
}

cout <<endl;
}
 
 
int main(){
    fastio;
 
    int t = 1;
    
    while(t--){
        solve();
    }
    return 0;
}