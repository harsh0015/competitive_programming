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

    int n,k;cin>>n>>k;
    
    vector<vector<int>>adj;

    for(int i=0;i<n+1;i++){
        vector<int>v;
        adj.push_back(v);
    }
    vector<pair<int,int>>vp;
    while(k--){
        int a,b;cin>>a>>b;
        vp.push_back({a,b});
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<pair<int,int>>v;

    for(int i=1;i<n+1;i++){
        v.push_back({adj[i].size(),i});
    }
    sort(v.begin(), v.end());
    int ans[n+1];

    for(int i=0;i<n;i++){
        ans[v[i].second]=n-i;
    }

    vector<int>count(n+1,0);

    for(int i=0;i<vp.size();i++){
        pair<int,int>p=vp[i];

        if(ans[p.first]>ans[p.second])count[p.first]++;
        else count[p.second]++;
    }
     int co=0;
     for(int i=1;i<n+1;i++)co=max(co,count[i]);

        cout <<co<<endl;
     
    for(int i=1;i<n+1;i++)cout <<ans[i]<<" ";

    cout <<endl;

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