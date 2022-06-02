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

 
 ///

 string binary(ll n){
        string s="";
        while(n){
            if(n%2==1)s="1"+s;
            else s="0"+s;

            n=n/2;
        }
        ll x=32-s.length();
        while(x--){
            s="0"+s;
        }

        return s;
     }
void dfs(int ind,int last){

}
void solve(){
    
    int n;cin>>n;
    
    map<vector<int>,int>m;
    vector<vector<int>>adj(n);
   
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        a--;b--;
       
        m[{a,b}]=i;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool>visited(n,false);
     vector<int>ans(n-1);

     for(int i=0;i<n;i++){
        if(adj[i].size()>2){
            cout <<-1<<endl;
            return;
        }
     }

   
    int ind=-1;
    for(int i=0;i<n;i++){
        if(adj[i].size()==1){
            ind=i;
            break;
        }
    }
    
    queue<int>q;
    q.push(ind);
    int c=0;
    int last=-1;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        visited[x]=true;
        
         for(auto i:adj[x]){
            if(!visited[i])q.push(i);
         }

         if(last!=-1){
            if(m.count({last,x})){
                if(c%2==0){
                    ans[m[{last,x}]]=2;
                }
                else{
                    ans[m[{last,x}]]=3;
                }
            }
            else {
                if(c%2==0){
                    ans[m[{x,last}]]=2;
                }
                else{
                    ans[m[{x,last}]]=3;
                }
            }
         }
         last=x;
         c++;

    }

    for(int i=0;i<n-1;i++)cout <<ans[i]<<" ";
        cout <<endl;
    
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