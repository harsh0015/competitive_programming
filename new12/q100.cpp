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
const ll M = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)

 ll mod(ll x){
            return ((x%M + M)%M);
        }
ll add(ll a, ll b){
            return mod(mod(a)+mod(b));
        }
  ll mul(ll a,ll b){
            return mod(mod(a)*mod(b));
        }
    
ll modPow(ll a, ll b){
            if(b==0)
                return 1ll;
            if(b==1)
                return a%M;
            ll res=1;
            while(b){
                if(b%2==1)
                    res=mul(res,a);
                a=mul(a,a);
                b=b/2;
            }
            return res;
        }

        const ll N=2e5+2;
        ll fact[N];

        void precalc(){
            fact[0]=1;
            for(int i=1;i<N;i++){
                fact[i]=mul(fact[i-1],i);
            }
        }

 ll inv(ll x){
            return modPow(x,M-2);
        }

  ll divide(ll a, ll b){
            return mul(a,inv(b));
        }
   ll nCr(ll n, ll r){
            return divide(fact[n],mul(fact[r],fact[n-r]));
        }

 vector<int>sz(100001);
 vector<bool>visited(100001);
 vector<vector<int>>adj(100001);
  int n;
  int cent1,cent2;

  int dfs(int x ){
    visited[x]=true;
    int s=1;

     for(auto i:adj[x]){
        if(!visited[i]){
          s=s+dfs(i);
        }
     }

     return sz[x]=s;
  }

  void centroid(int x){
    visited[x]=true;

    int ma=0;
    int sum=0;
    for(auto i:adj[x]){
        if(!visited[i]){
            sum=sum+sz[i];
           ma=max(ma,sz[i]);
        }
    }

    ma=max(ma,n-1-sum);
    if(ma<=n/2){
        if(cent1==-1){
            cent1=x;
        }
        else{
            cent2=x;
            return ;
        }
    }


    if(cent1==-1 || cent2==-1){
        int ref=-1;
        int y=-1;
        for(auto i:adj[x]){
            if(!visited[i]){
                if(sz[i]>y){
                    y=sz[i];
                    ref=i;
                }
            }
        }
        if(ref!=-1)
        centroid(ref);
    }

  }
 ///
void solve(){
     cent1=-1;cent2=-1;
   cin>>n;
    for(int i=0;i<n;i++){
        sz[i]=1;
        visited[i]=false;
    }
    for(int i=0;i<n;i++){
        adj[i].clear();
    }
   
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(0);
    for(int i=0;i<n;i++)visited[i]=false;
    centroid(0);

     if(cent2==-1){
        cout <<cent1+1<<" "<<adj[cent1][0]+1<<endl;
        cout <<cent1+1<<" "<<adj[cent1][0]+1<<endl;
        return;
     }
     else{
        for(auto i:adj[cent2]){
            if(i!=cent1){
                 cout <<cent2+1<<" "<<i+1<<endl;
               cout <<cent1+1<<" "<<i+1<<endl;
               return;
            }
        }
       
     }


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