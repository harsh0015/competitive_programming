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

vector<vector<ll>> adj(100002);
bool vis[100002];
ll n,m;

void dfs(ll n){
    vis[n]=true;

    for(ll i=0;i<adj[n].size();i++){
        if(!vis[adj[n][i]])
            dfs(adj[n][i]);
    }
}

 
void solve(){

    cin>>n>>m;

    while(m--){
     ll a,b;cin>>a>>b;
     adj[a].push_back(b);
     adj[b].push_back(a);
    }

    ll count=0;
    vector<ll>ans;

    for(ll i=1;i<n+1;i++){
        if(!vis[i]){
            ans.push_back(i);
            count++;
            dfs(i);
        }
    }


     cout <<count-1<<endl;

     for(ll i=1;i<ans.size();i++){
        cout <<ans[i]<<" "<<ans[i-1]<<endl;
     }


}
 
 
int main(){
    fastio;
 
    int t = 1;
  
    while(t--){
        solve();
    }
    return 0;
}