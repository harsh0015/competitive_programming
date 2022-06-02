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


//basically implementation of kahn's algorithm
 
void solve(){

    int n,m;cin>>n>>m;

    vector<vector<int>>adj(n+1);
    vector<int>indegree(n+1,0);

    while(m--){
        int u,v;cin>>u>>v;

        adj[u].push_back(v);
        indegree[v]++;

    }
   
    priority_queue<int,vector<int>,greater<int>>pq;

    for(int i=1;i<n+1;i++){
        if(indegree[i]==0)pq.push(i);
    }

    vector<int>ans;

    while(!pq.empty()){
        int i=pq.top();
        pq.pop();

        ans.push_back(i);

        for(auto k:adj[i]){
            if(--indegree[k]==0){;

                pq.push(k)       }
        }
    }

    if(ans.size()!=n)cout <<-1<<endl;
    else {
        for(int i=0;i<n;i++)cout <<ans[i]<<" ";
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