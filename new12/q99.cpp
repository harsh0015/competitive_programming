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
void solve(){
     
    ll p,q;cin>>p>>q;
    ll ca,cb;cin>>ca>>cb;
    ll a,b;cin>>a>>b;
    pair<int,int>p1,p2;

        if(b<a){
        swap(a,b);
        swap(ca,cb);
    }
     ll count=0;
    if(ca*a<=p){
        p=p-ca*a;
        count+=ca;
        p1.first=ca;
        ca=0;
    }
    else{
        int x=p/a;
        p=p-a*x;
        ca=ca-x;
        count+=x;
        p1.first=x;
    }

    if(ca!=0){
        if(ca*a<=q){
        q=q-ca*a;
        count+=ca;
        p2.first=ca;
        ca=0;
    }
    else{
        int x=q/a;
        q=q-a*x;
        count+=x;
        p2.first=x;
        ca=ca-x;
    }
    }

    if(ca!=0){

        cout <<count<<endl;
        return;
    }
   ////

     if(cb*b<=p){
        p=p-cb*b;
        count+=cb;
        p1.second=cb;
        cb=0;
    }
    else{
        int x=p/b;
        p=p-b*x;
        cb=cb-x;
        p1.second=x;
        count+=x;
    }

    if(cb!=0){
        if(cb*b<=q){
        q=q-cb*b;
        count+=cb;
        p2.second=cb;
        cb=0;
    }
    else{
        int x=q/b;
        q=q-b*x;
        count+=x;
        p2.second=x;
        cb=cb-x;
    }
    }

    if(cb==0){
        cout <<count<<endl;
        return;
    }
    
    cout <<p1.first<<" "<<p1.second<<endl;
    cout <<p2.first<<" "<<p2.second<<endl;
    int ans1=count;
    int ans2=count;

   if(q!=0){
     int y=q/a;
     int r=min(y,p1.first);
     if(p+r*a>=b){
       int e=min(cb,(p+r*a)/b);
       ans1=count+e;
     }
   }
   if(p!=0){
     int y=p/a;
     int r=min(y,p2.first);
     if(q+r*a>=b){
       int e=min(cb,(q+r*a)/b);
       ans2=count+e;
     }
   }
   cout <<max(ans1,ans2)<<endl;

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