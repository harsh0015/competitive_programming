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

 ll mod =1e9+7;

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

    ll n,m,k;cin>>n>>m>>k;

    ll low =1;
    ll high=m;
    ll ans=1;

    while(low<=high){\
      ll mid=(low+high)/2;
      
      ll l=k-1;
      ll r=n-k;
      ll sum=mid;

      if(l>=mid-1){
         sum+= (mid*(mid-1))/2 + l-mid+1;
      }
      else{
        ll h=mid-1-l;
        sum=sum+(mid*(mid-1))/2 -(h*(h+1))/2;
      }

       if(r>=mid-1){
         sum+= ((mid-1)*(mid))/2 + r-mid+1;
      }
      else{
        ll h=mid-1-n+k;
        sum=sum+((mid-1)*(mid))/2-(h*(h+1))/2;
      }
      
      if(sum<=m){
        ans=max(ans,mid);
        low=mid+1;
      }
      else high=mid-1;
    }

    cout <<ans<<endl;

}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
    
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}