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


const int N = 200 * 1000 + 11;

int n, m;
int deg[N];
bool used[N];
vector<int> comp;
vector<int> adj[N];

void dfs(int i){
    used[i]=true;

    comp.push_back(i);

    for(auto x:adj[i]){
        if(!used[x])
            dfs(x);
    }
}
 
void solve(){
int n,m;cin>>n>>m;

while(m--){

    int a,b;cin>>a>>b;
    
     adj[a].push_back(b);
     adj[b].push_back(a);
     deg[a]++;
     deg[b]++;

}

int ans=0;

for(int i=1;i<=n;i++){
    if(!used[i]){
        comp.clear();
        dfs(i);

        bool found=true;

        for(int j=0;j<comp.size();j++){
            if(deg[comp[j]]!=2)found=false;
        }

        if(found)ans++;
    }
}

cout <<ans<<endl;
}
 
 
int main(){
    fastio;
 
    int t = 1;
    
    while(t--){
        solve();
    }
    return 0;
}