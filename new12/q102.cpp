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

 
 ///
int n;
map<int ,int>m1,m2;
vector<bool>visited(200001,false);
 vector<vector<int>>adj(200001);
 bool flag1,flag2;
 string s;

 void dfsr(int x){
    if(!flag1)return;
    visited[x]=true;
    for(auto i:adj[x]){
        if(s[i]=='R' && !visited[i]){
            if(m1.find(i)!=m1.end())flag1=false;
            else dfsr(i);
        }
    }
 }
 void dfsg(int x){
    if(!flag2)return;
    visited[x]=true;
    for(auto i:adj[x]){
        if(s[i]=='G' && !visited[i]){
            if(m2.find(i)!=m2.end())flag2=false;
            else dfsg(i);
        }
    }
 }
void solve(){
     
    cin>>n;
    cin>>s;

    if(n==1){
        cout <<"Yes"<<endl;
        return;
    }

    int count=0;

    for(int i=0;i<n;i++)adj[i].clear();

     vector<vector<int>>edges;
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        a--;
        b--;
        edges.push_back({a,b});
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=0;i<n;i++){
        if(adj[i].size())count++;
    }

    if(count<n){
        cout <<"No"<<endl;
        return;
    }
     
   
     map<int,int>m;
    map<int,int>mm;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
             mm[i]++;
             for(auto x:adj[i]){
                m[x]++;
             }
        }
    }
    
   

     for(int i=0;i<edges.size();i++){
        if(mm.find(edges[i][0])!=mm.end() && mm.find(edges[i][1])!=mm.end()){
            cout <<"No"<<endl;
            return;
        }
     }

    for(auto i:m){
        if(i.second>1){
            cout <<"No"<<endl;
            return;
        }
    }

    for(int i=0;i<n;i++)visited[i]=false;

        m1.clear();
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
             for(auto x:adj[i]){
                if(s[x]=='R')m1[x]++;
             }
            }
        }

        flag1=true;

        for(int i=0;i<n;i++){
            if(s[i]=='R' && m1.find(i)!=m1.end() && !visited[i]){
                dfsr(i);
            }
        }

        //

         for(int i=0;i<n;i++)visited[i]=false;

        m2.clear();
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
             for(auto x:adj[i]){
                if(s[x]=='G')m2[x]++;
             }
            }
        }

        flag2=true;

        for(int i=0;i<n;i++){
            if(s[i]=='G' &&m2.find(i)!=m2.end() && !visited[i]){
                dfsg(i);
            }
        }

       if(flag1 && flag2)cout <<"Yes"<<endl;
       else cout <<"No"<<endl;


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