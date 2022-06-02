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


vector<int>v;
vector<int>seg;

void build_seg(int ind,int l ,int r){
            if(l==r){
                seg[ind]=v[l];
                return;
            }
            int mid=(l+r)/2;
            build_seg(2*ind,l,mid);
            build_seg(2*ind+1,mid+1,r);

            seg[ind]=seg[2*ind]+seg[2*ind+1];
            
        }
     //between l r
    int sum(int ind,int tl,int tr,int l ,int r){
        if(tl>=l && tr<=r)return seg[ind];
        if(tl>r || tr<l)return 0;
        int mid=(tl+tr)/2;
        return sum(2*ind,tl,mid,l,r)+sum(2*ind+1,mid+1,tr,l,r);
    }

    void update(int ind,int tl ,int tr,int i,int diff){
        if(tl>tr)return;
        if(i<tl || i>tr)return ;
        seg[i]+=diff;
        if(tl!=tr){
            int mid=(tl+tr)/2;
            update(2*ind,tl,mid,i,diff);
            update(2*ind+1,mid+1,tr,i,diff);
        }
    }
void solve(){
    int n;cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++)cin>>v[i];
    seg.resize(4*n);
    build_seg(0,0,n-1);
   for(auto i:seg)cout <<i<<" ";
    cout <<endl;
    // cout <<sum(0,0,n-1,1,3);
    // update(0,0,n-1,2,1);
    // cout <<sum(0,0,n-1,1,3);
      
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