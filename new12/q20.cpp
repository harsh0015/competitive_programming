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
ll mod=998244353;

ll modInverse(ll a, ll m) 
{ 
    ll m0 = m; 
    ll y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
      
        ll q = a / m; 
        ll t = m; 
  
       
        m = a % m, a = t; 
        t = y; 
  
        
        y = x - q * y; 
        x = t; 
    } 
  
 
    if (x < 0) 
       x += m0; 
  
    return x; 
} 

 
void solve(){

    ll n;cin>>n;

    if(n%2==1){
        ll ans=n%mod;
        ans=(ans*((n+1)/2))%mod;
         ans=(ans*((n+1)/2))%mod;
        
         cout <<ans<<endl;
    }
    else{
        if(n%4==0){
           ll ans=(n/4)%mod;
        ans=(ans*((n+1)))%mod;
         ans=(ans*((n+1)))%mod;
        
         cout <<ans<<endl;
        }
        else{
           ll ans=(n/2)%mod;
        ans=(ans*(n+1))%mod;
         ans=(ans*(n+1))%mod;
         ans=(ans*modInverse(2,mod))%mod;
        
         cout <<ans<<endl;
        }
    }

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