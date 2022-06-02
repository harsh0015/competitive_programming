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
void solve(){
    
    
        ll n;cin>>n;

        vector<ll>a(n),b(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++)cin>>b[i];

            if(n==1){
                cout <<0<<endl;
                return;
            }

        ll dp[10001][n];
        bool visited[10001][n];
        

       for(ll i=0;i<10001;i++)
        for(ll j=0;j<n;j++){
            visited[i][j]=false;
            dp[i][j]=M;
        }

        dp[a[0]][0]=0;
        dp[b[0]][0]=0;
        visited[a[0]][0]=true;
        visited[b[0]][0]=true;

        vector<ll>pre(n);
        pre[0]=a[0]+b[0];
        for(ll i=1;i<n;i++)pre[i]=pre[i-1]+a[i]+b[i];

        for(ll i=1;i<n;i++){
            for(ll s=0;s<10001;s++){
                if(visited[s][i-1]){
                    dp[s+a[i]][i]=min(dp[s][i-1]+ 2*(s*a[i] +(pre[i-1]-s)*b[i]),dp[s+a[i]][i]);
                    visited[s+a[i]][i]=true;
                    dp[s+b[i]][i]=min(dp[s+b[i]][i],dp[s][i-1] + 2*(s*b[i] +(pre[i-1]-s)*a[i]));
                    visited[s+b[i]][i]=true;
                }
            }
        }
       ll t=0;
       for(ll i=0;i<n;i++)t+=(n-1)*(a[i]*a[i] + b[i]*b[i]);
        ll ans=M;
     for(ll i=0;i<10001;i++){
        if(visited[i][n-1]){
            ans=min(ans,dp[i][n-1]);
        }
     }
  cout <<ans+t<<endl;

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