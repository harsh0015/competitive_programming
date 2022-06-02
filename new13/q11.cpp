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
    ll closest(ll num){
        ll x=1;
        for(ll i=0;i<100;i++){
            if(x>=num)return x;
            x=x*2;
        }
        return 0;
    }
        
void solve(){
    
    ll n;cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
        sort(all(v));
    ll len=1;
    vector<ll>vs;
    for(ll i=1;i<n;i++){
        if(v[i]==v[i-1])len++;
        else {
            vs.push_back(len);
            len=1;
        }
    }
    vs.push_back(len);

    // for(auto i:vs)cout <<i<<" ";
    //     cout <<endl;
    n=vs.size();
    vector<ll>pre(n);
    pre[0]=vs[0];
    for(ll i=1;i<n;i++)pre[i]=pre[i-1]+vs[i];
        ll ans=M;

    for(ll len=0;len<=n;len++){
       ll dum=0;
       if(len==0){
        dum=1;
       }
       else dum=closest(pre[len-1])-pre[len-1];

       if(len==n){
        ans=min(ans,dum+2);
        continue;
       }

       ll mini=M;
       ll x=1;
       for(ll i=0;i<30;i++){

        ll r;
          if(len==0)r=x;
          else r=pre[len-1]+x;

          ll tt=0;

          auto it=lower_bound(pre.begin()+len,pre.end(),r);

          if(it==pre.end()){
            tt=closest(pre[n-1]-(len>0?pre[len-1]:0))-pre[n-1]+(len>0?pre[len-1]:0)+1;
          }
          else{
            int t=int(it-pre.begin());
            // cout <<len<<" "<<i<<" "<<r<<" "<<t<<endl;
            if(pre[t]==r){
               tt=closest(pre[n-1]-pre[t])-(pre[n-1]-pre[t]);
            }
            else{
                tt=closest(pre[n-1]-(t!=0?pre[t-1]:0))-(pre[n-1]-(t!=0?pre[t-1]:0));
                if(len==0){
                    if(t!=0)
                       tt+=closest(pre[t-1])-pre[t-1];
                   else tt+=1;
                }
                else{
                    tt+=closest(pre[t-1]-pre[len-1])-(pre[t-1]-pre[len-1]);
                }
            }
          }
          mini=min(mini,tt);
          x=x*2;
       }
       ans=min(ans,mini+dum);

       // cout <<len<<" "<<mini+dum<<endl;
    }

    cout <<ans<<endl;
    
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