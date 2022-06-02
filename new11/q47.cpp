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


void printLevels(vector<int> graph[], int V, int x)
{
    // array to store level of each node
    int level[V];
    bool marked[V];
 
    // create a queue
    queue<int> que;
 
    // enqueue element x
    que.push(x);
 
    // initialize level of source node to 0
    level[x] = 0;
 
    // marked it as visited
    marked[x] = true;
 
    // do until queue is empty
    while (!que.empty()) {
 
        // get the first element of queue
        x = que.front();
 
        // dequeue element
        que.pop();
 
        // traverse neighbors of node x
        for (int i = 0; i < graph[x].size(); i++) {
            // b is neighbor of node x
            int b = graph[x][i];
 
            // if b is not marked already
            if (!marked[b]) {
 
                // enqueue b in queue
                que.push(b);
 
                // level of b is level of x + 1
                level[b] = level[x] + 1;
 
                // mark b
                marked[b] = true;
            }
        }
    }
 
    // display all nodes and their levels
    cout << "Nodes"
         << "    "
         << "Level" << endl;
    for (int i = 0; i < V; i++)
        cout << " " << i << "   -->   " << level[i] << endl;
}
 
void solve(){
  

    int n, k;
    cin >> n >> k;


    vector<vector<int>>adj;
     for(int i=0;i<n;i++){
        vector<int>v;
        adj.push_back(v);
     }
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
   cout <<"YE";

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