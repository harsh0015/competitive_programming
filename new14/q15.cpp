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


void solve(){
   
   ll n,m;cin>>n>>m;
   vector<string>mat;
   for(ll i=0;i<n;i++){
    string s;cin>>s;
    mat.push_back(s);
   }
   vector<ll>x,y;
   for(ll i=0;i<n;i++)
    for(ll j=0;j<m;j++)
        if(mat[i][j]=='B'){
            x.push_back(i);
            y.push_back(j);
        }

    sort(all(x));
    sort(all(y));
    vector<ll>prex(x.size());
    prex[0]=x[0];
    for(ll i=1;i<x.size();i++)prex[i]=prex[i-1]+x[i];
     vector<ll>prey(y.size());
    prey[0]=y[0];
    for(ll i=1;i<y.size();i++)prey[i]=prey[i-1]+y[i];
  ll mx=INT_MAX;
 ll indx=-1;
  for(ll i=0;i<n;i++){
     ll t=max(abs(i-x[0]),abs(i-x.back()));
     if(t<mx){
        mx=t;
        indx=i;
     }
  }
  // cout <<mx<<endl;
  
  ll my=INT_MAX;
 ll indy=-1;
  for(ll i=0;i<m;i++){
     ll t=max(abs(i-y[0]),abs(i-y.back()));
     if(t<my){
        my=t;
        indy=i;
     }
  }
  // cout <<my<<endl;
  
  cout <<indx+1<<" "<<indy+1<<endl;
//   int ans=0;
//   for(auto a:x)ans+=abs(a-indx-1);
//     for(auto b:y)ans+=abs(b-indy-1);
//     cout <<ans<<endl;
// ans=0;
// cout <<6<<" "<<5<<endl;
// for(auto a:x)ans+=abs(a-5-1);
//     for(auto b:y)ans+=abs(b-4-1);
//         cout <<ans<<endl;


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