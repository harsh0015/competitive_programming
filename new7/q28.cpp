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


vector<int> adj[100000];
int count1[100000];
void addEdge(int a, int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void numberOfNodes(int s, int e)
{
    vector<int>::iterator u;
    count1[s] = 1;
    for (u = adj[s].begin(); u != adj[s].end(); u++) {
        
        // condition to omit reverse path
        // path from children to parent
        if (*u == e)
            continue;
        
        // recursive call for DFS
        numberOfNodes(*u, s);
        
        // update count[] value of parent using
        // its children
        count1[s] += count1[*u];
    }
}

void solve(){
 int n,k;cin>>n>>k;

 for(int i=2;i<=n;i++){
    int a;cin>>a;
   addEdge(a, i);
 }

 numberOfNodes(1, 0);

 vector<int>v;


    for (int i = 1; i <= n; i++) {
        v.push_back(count1[i]);
    }

    for(int i=0;i<v.size();i++)cout <<v[i]<<" ";

        cout <<endl;
 

for(int i=0;i<10000;i++)count1[i]=0;

}


int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}