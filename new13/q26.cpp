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
string s;
vector<int>seg(400+1);  

void build(int ind,int l,int h){
    if(l==h){
        if(s[l]=='1')
           seg[ind]=1;
       else seg[ind]=0;
        return ;
    }
  if(ind < l || ind > h)return;

  int mid=(l+h)/2;
  build(2*ind+1,l,mid);
  build(2*ind+2,mid+1,h);
 seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);

}

void update(int ind ,int i,int l ,int r, int val){
    if(i <l || i >r)return;

    if(i>=l && i <=r)seg[ind]=max(seg[ind],val);
    int mid=(l+r)/2;
    update(2*ind+1,i,l,mid,val);
    update(2*ind+2,i,mid+1,r,val);
}

int query(int ind, int low,int high ,int l, int r){
    if(low>=l && high <=r)return seg[ind];
    if(high <l || low>r)return 0;
    int mid=(l+r)/2;
    int left=query(2*ind+1,low,high,l,mid);
    int right=query(2*ind+2,low,high,mid+1,r);

    return max(left,right);
}


void solve(){
    
    int n;cin>>n;
    cin>>s;
    
    build(0,0,n-1);
   // update(0,4,0,n-1,0);
   cout <<query(0,0,n-1,0,n-1);
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