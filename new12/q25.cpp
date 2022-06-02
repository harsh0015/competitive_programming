#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
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
    ll mod =1000000007;

 ll qpow(ll x,ll k){
    ll res=1;
    while(k){
        if(k&1)res=res*x%mod;
        x=x*x%mod;
        k>>=1;
    }
    return res;
}
void solve(){
 
    ll n,m;cin>>n>>m;
     
    ll orr=0;
    for(ll i=0;i<m;i++){
        ll l,r,x;cin>>l>>r>>x;
        orr=orr|x;
    }

    ll i=0;
    ll ans=0;
    while(orr){
        if(orr%2==1){
          ans=ans+(qpow(2,n-1)%mod*(1<<i)%mod)%mod;
        }
        i++;
        orr=orr/2;
    }
    

  cout <<ans%mod<<endl;
}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
    while(t--){
        solve();
    }
    return 0;
}