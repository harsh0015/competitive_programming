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



void solve(){

    cin.ignore();

    int n,k;cin>>n>>k;
    vector<int>indegree(n,0);
    vector<vector<int>>adj(n);

    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
        indegree[a-1]++;
        indegree[b-1]++;
    }
    vector<bool>removed(n,false);

    queue<int>q;
    for(int i=0;i<n;i++){
        if(indegree[i]<=1){
            q.push(i);
        }
    }

    while(k-- && !q.empty()){
        queue<int>q1;

        while(!q.empty()){
            int x=q.front();
            q.pop();

            removed[x]=true;

            for(auto i :adj[x]){
                if(!removed[i]){
                    indegree[i]--;
                    if(indegree[i]==1)q1.push(i);
                }
            }
        }
        swap(q,q1);
    }

    int count=0;
    for(int i=0;i<n;i++){
        if(!removed[i])count++;
    }

    cout <<count<<endl;

}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}