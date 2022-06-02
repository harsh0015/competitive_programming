#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn=1e5+5;
vector<ll> adj[maxn];
vector<ll> sz(2);
void dfs(ll u,ll p,bool fl=0){
    sz[fl]++;
    for(ll v:adj[u]){
        if(v!=p) dfs(v,u,!fl);
    }
}
int main(){
    ll n;
    cin >> n;
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1);
    cout << sz[0]*sz[1] - (n-1) << endl;
    return 0;
}