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
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)

 ll qpow(ll x,ll k){
    ll res=1;
    while(k){
        if(k&1)res=res*x%mod;
        x=x*x%mod;
        k>>=1;
    }
    return res;
}
 
 ///
void solve(){
     
  ll n;cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++)cin>>v[i];

  ll sum=0;
    for(ll i=0;i<n;i++)sum+=v[i];

    ll x = (n*(n+1))/2;
     
     if(sum%x!=0){
        cout <<"NO"<<endl;
         return;
     } 

     ll y=sum/x;

     vector<ll>ans(n);
     bool flag=true;

     for(ll i=1;i<n;i++){
        if((y+v[i-1]-v[i])%n==0){
            ans[i]=(y+v[i-1]-v[i])/n;
            if(ans[i]<1)flag=false;
        }
        else flag=false;

     }

     if((y + v[n-1]-v[0])%n==0){
        ans[0]=(y + v[n-1]-v[0])/n;
        if(ans[0]< 1)flag=false;
     }
     else flag=false;

     if(!flag){
        cout <<"NO"<<endl;
        return;
     }
     else {
        cout <<"YES"<<endl;
        for(ll i=0;i<n;i++)cout <<ans[i]<<" ";

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