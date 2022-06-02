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
typedef  long long int ll;
typedef long double ld;
#define rall(x) x.rbegin(), x.rend()
#define all(x) x.begin(),x.end()
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

vector<int>parent;
vector<int>level;

void dfs(int ind,int par,int l,vector<vector<vector<int>>>&adj,vector<vector<int>>&dp,vector<vector<int>>&mx){
    parent[ind]=par;
   level[ind]=l;
   dp[ind][0]=par;

   for(auto x:adj[ind]){
       if(x[0]!=parent[ind]){
           mx[x[0]][0]=x[1];
           dfs(x[0],ind,l+1,adj,dp,mx);
       }
   }
}
void build(vector<vector<int>>&dp,vector<vector<int>>&mx){
    for(int i=1;i<20;i++){
        for(int j=0;j<dp.size();j++){
            if(dp[j][i-1]!=-1){
                dp[j][i]=dp[dp[j][i-1]][i-1];
                mx[j][i]=max(mx[j][i-1],mx[dp[j][i-1]][i-1]);
            }
        }
    }
}

int find_lca_max(int a,int b,vector<vector<int>>&dp,vector<vector<int>>&mx){
    cout <<"hello"<<endl;
    int ans=0;

    if(level[a]<level[b])swap(a,b);
    int diff=level[a]-level[b];
    // cout <<diff<<endl;
    for(int i=20;i>=0;i--){
        if(diff-(1<<i)>=0){
            diff-=(1<<i);
            ans=max(ans,mx[a][i]);
            a=dp[a][i];
        }
    }

    while(a!=b){
         int x=1;
         while(x<=level[a]){
            x=x*2;
         }
         x--;
         while(x>0 && dp[a][x]==dp[b][x])x--;
         ans=max(ans,mx[a][x]);
         ans=max(ans,mx[b][x]);
         a=dp[a][x];
         b=dp[b][x];
    }
    return ans;
}

void solve(){
   int n;cin>>n;
   vector<vector<int>>edges;
   for(int i=0;i<n-1;i++){
    int a,b,c;cin>>a>>b>>c;
    edges.push_back({a,b,c});
   }

    vector<vector<vector<int>>>adj(n);
    for(auto x:edges){
        int i=x[0]-1;
        int j=x[1]-1;
        int w=x[2];
        adj[i].push_back({j,w});
        adj[j].push_back({i,w});
    }
   parent.resize(n);
   level.resize(n);
   vector<vector<int>>dp(n,vector<int>(20,-1));
   vector<vector<int>>mx(n,vector<int>(20,-1));
   dfs(0,-1,0,adj,dp,mx);
   build(dp,mx);
   int q;cin>>q;
   vector<vector<int>>queries;
   for(int i=0;i<q;i++){
    int a,b;cin>>a>>b;
     queries.push_back({a,b});
   }
   // cout <<"hello"<<endl;
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<4;j++){
    //         cout <<dp[i][j]<<" "<<mx[i][j]<<endl;
    //     }
    //     cout <<endl;
    // }
   // for(auto x:level)cout <<x<<" ";
   //  cout <<endl;
   vector<int>ans;
   for(auto x:queries){
    int a=x[0]-1;
    int b=x[1]-1;
    ans.push_back(find_lca_max(a,b,dp,mx));
   }
   for(auto x:ans)cout <<x<<" ";
}
 
 //////
 
int main(){
    fastio;
    #ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

    int t = 1;
   
    cin>>t;
   for(int i=1;i<=t;i++){
     // cout<<"Case #"<<i<<":"<<" ";
    solve();
   }
    return 0;
}