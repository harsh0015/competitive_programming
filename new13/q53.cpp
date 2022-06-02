
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

        struct data{
            int pre,suf,sum,ma;
        };

        vector<int>v;
        vector<data>seg;
        data fill(int val){
            data x;
           x.sum=val;
           x.pre=x.suf=x.ma=max(0,val);

            return x;
        }
        data combine(data d1,data d2){
            data x;
            x.sum=d1.sum+d2.sum;
            x.pre=max(d1.pre,d1.sum+d2.pre);
            x.suf=max(d2.suf,d1.suf+d2.sum);
            x.ma=max({d1.ma,d2.ma,d1.suf+d2.pre});

            return x;
        }
 void build(int ind,int tl,int tr){
     if(tl==tr){
        seg[ind]=fill(v[tl]);
        return;
     }
     int mid=(tl+tr)/2;
     build(2*ind+1,tl,mid);
     build(2*ind+2,mid+1,tr);
     seg[ind]=combine(seg[2*ind+1],seg[2*ind+2]);
 }
 void update(int ind ,int tl ,int tr,int i,int val){
    if(i<tl || i>tr)return ;
    if(tl>tr)return ;
    if(tl==tr){
        seg[ind]=fill(val);
        return;
    }
    int mid=(tl+tr)/2;
    update(2*ind+1,tl,mid,i,val);
    update(2*ind+2,mid+1,tr,i,val);
    seg[ind]=combine(seg[2*ind+1],seg[2*ind+2]);
 }

 data query(int ind ,int tl,int tr,int l,int r){
     if(l>r)return fill(0);
     if(tl>=l && tr<=r)return seg[ind];

     int mid=(tl+tr)/2;
     return combine(query(2*ind+1,tl,mid,l,r),query(2*ind+2,mid+1,tr,l,r));

 }

void solve(){
    
    int n;cin>>n;
    v.resize(n);
    seg.resize(4*n);
    for(int i=0;i<n;i++)cin>>v[i];

    build(0,0,n-1);
      
}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
   
    cin>>t;
   for(int i=1;i<=t;i++){
    // cout<<"Case #"<<i<<":"<<" ";
    solve();
   }
    return 0;
}