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

int n,m;
vector<int> adj[100004];

int par[100004];
bool vis[100004];

void bfs (int x){
    vis[x]=true;
    queue<int>q;
    q.push(x);

    

    while(!q.empty()){
        int y=q.front();
        q.pop();

        for(auto i: adj[y]){
        if(!vis[i]){
            vis[i]=true;
            par[i]=y;
            q.push(i);
        }
    }
        }
}

 
void solve(){

    for(int i=0;i<n;i++){
        par[i]=0;
    }
   
   cin>>n>>m;

   while(m--){
    int a,b;cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);

       }


    
     bfs(1);

     if(!vis[n]){
      cout<<"IMPOSSIBLE"<<endl;
      return;
     }

     
    
     vector<int>path;
     path.push_back(n);

     int cur=n;
     while(cur!=1){
       int p=par[cur];
       path.push_back(p);
       cur=p;

     }
  reverse(path.begin(), path.end());

  cout<<path.size()<<endl;

  for(int i=0;i<path.size();i++){
    cout<<path[i]<<" ";
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