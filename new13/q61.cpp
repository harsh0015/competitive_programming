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
    
       string s;cin>>s;
      int n=s.length();
      vector<int>for_hash(n);
      int val=0;
      for(int i=0;i<n;i++){
        val=add(val,mul(int(s[i]-'a')+1,modPow(31,i+1)));
        for_hash[i]=val;
      }
      vector<int>back_hash(n);
      string r=s;
    
        val=0;
      for(int i=n-1;i>=0;i--){
        val=add(val,mul(int(r[i]-'a')+1,modPow(31,n-1-i+1)));
        back_hash[i]=val;
      }
     //  for(auto x:for_hash)cout <<x<<" ";
     //    cout <<endl;

     // for(auto x:back_hash)cout <<x<<" ";
     //    cout <<endl;


            int ans=0;
      for(int i=0;i<n;i++){

        
          int high=min(i,n-1-i);
          int low=1;
          // cout <<low<<" "<<high<<endl;
          while(low<=high){
            int mid=(low+high)/2;
            
            int fh=for_hash[i];
            int x=i-mid-1;
            int fhv=1;
            if(x>=0){
                fh=add(fh,-for_hash[x]);
             fhv=modPow(31,x+1);
         }
         // cout <<fh<<" "<<fhv<<endl;
          
            int bh=back_hash[i];
            int y=i+mid+1;
            int bhv=1;
            if(y<=n-1){
             bh=add(bh,-back_hash[y]);
             bhv=modPow(31,n-1-y+1);
            }
             
            // cout <<bh<<" "<<bhv<<endl;
         
          if(mul(bhv,fh)==mul(fhv,bh)){
            ans=max(ans,1+2*mid);
            low=mid+1;
          }
          else high=mid-1;
      }
      // cout <<i<<" "<<ans<<endl;
  }

  cout <<ans<<endl;
      
}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
   
    
   for(int i=1;i<=t;i++){
    // cout<<"Case #"<<i<<":"<<" ";
    solve();
   }
    return 0;
}