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
const int N=1e5+6;
vector<int>parent(N),sz(N);

int findSet(int v){
  if(v==parent[v])
    return v;

  return parent[v]=findSet(parent[v]);
}

void makeSet(int i){
    parent[i]=i;
    sz[i]=1;
}

void unionSets(int a ,int b){
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

for(int i=0;i<N;i++){
    makeSet(i);
}

int n,m;cin>>n>>m;

vector<vector<int>>edges;

for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    edges.push_back({a,b});
}
bool cycle=false;
for (auto i:edges)
{
    int u=i[0];
    int v=i[1];

    int x=findSet(u);
    int y=findSet(v);

    if(x==y){
cycle=true;
    }

    else{
        unionSets(u,v);
    }
}

if(cycle)cout <<"cycle found";
else cout <<"not found";

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