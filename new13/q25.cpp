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
    
    ll n,k;cin>>n>>k;

    if(k==1){
        cout <<"YES"<<endl;
        for(ll i=1;i<=n;i++)cout <<i<<endl;

            return ;
    }

    if(n==1){
        cout <<"NO"<<endl;
        return;
    }
    if((n*k)%2!=0){
        cout <<"NO"<<endl;
        return;
    }
    

  
    vector<vector<ll>>ans1;
    vector<ll>v;
     ll i=1;
ll count=0;
     while(i<=n*k){
       v.push_back(i);
       i=i+2;
       count++;
       if(count==k){
        ans1.push_back(v);
        v.clear();
        count=0;
       }
     }
   if(count!=0){

      cout <<"NO"<<endl;
      return;
   }

     i=2;
    count=0;
     while(i<=n*k){
       v.push_back(i);
       i=i+2;
       count++;
       if(count==k){
        ans1.push_back(v);
        v.clear();
        count=0;
       }
     }
   if(count!=0){
      cout <<"NO"<<endl;
      return;
   }
   cout <<"YES"<<endl;
   for(ll i=0;i<n;i++){
    for(ll j=0;j<k;j++){
        cout <<ans1[i][j]<<" ";
    }
    cout <<endl;
   }
     
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