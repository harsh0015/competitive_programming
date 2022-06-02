#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<long long int>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
using vpll =vector<pair<ll,ll>>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)

 ll qpow(ll x,ll k){
    ll res=1;
    while(k){
        if(k&1)res=res*x%mod;
        x=x*x%mod;
        k>>=1;
    }
    return res;
}
 
 ///
void solve(){
     
    int n;cin>>n;
    vector<vector<int>>ver;

    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;

        ver.push_back({a,b});
    }

    vector<vector<int>>adj(n);
    vector<vector<int>>edges;

    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        a--;b--;
        edges.push_back({a,b});
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

  

    queue<int>q;
    for(int i=0;i<n;i++){
        if(adj[i].size()==1){
            q.push(i);

            break;
        }
    }
   int c=0;
   vector<int>val(n);
   vector<bool>visited(n,false);
    while(!q.empty()){

        queue<int>q1;

        while(!q.empty()){
             int x=q.front();
            
         q.pop();
        visited[x]=true;

        if(c%2==0){
         val[x]=ver[x][1];
        }
        else val[x]=ver[x][0];

        for(auto i: adj[x]){
            if(visited[i]==false){
                q1.push(i);
            }
        }
        }
        c++;
    
        swap(q,q1);
    }

    int ans=0;

    for(auto i: edges ){
        ans=ans+abs(val[i[0]]-val[i[1]]);
    }


   ////

     queue<int>q1;
    for(int i=0;i<n;i++){
        if(adj[i].size()==1){
            q1.push(i);
            break;
        }
    }
    c=1;
   vector<int>val1(n);
   vector<bool>visited1(n,false);
    while(!q1.empty()){

        queue<int>q2;

        while(!q1.empty()){
             int x=q1.front();
         q1.pop();
        visited1[x]=true;

        if(c%2==0){
         val1[x]=ver[x][1];
        }
        else val1[x]=ver[x][0];

        for(auto i: adj[x]){
            if(visited1[i]==false){
                q2.push(i);
            }
        }
        }
        c++;
    
        swap(q1,q2);
    }

    int ans2=0;

    for(auto i: edges ){
        ans2=ans2+abs(val1[i[0]]-val1[i[1]]);
    }

  cout <<max(ans,ans2)<<endl;

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