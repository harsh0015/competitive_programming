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

    ll n;cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        swap(a,b);
        v.push_back({a,b});
    }

    ll low=1;
    ll high=n;
    ll ans=1;

    while(low<=high){
        ll mid=(low+high)/2;

        ll count=0;

        for(ll i=0;i<n;i++){
          if(v[i].first>=count && v[i].second>=mid-count-1)
            count++;
        }
         
         if(count>=mid){
            ans=max(ans,mid);
            low=mid+1;
         }
         else{
          high=mid-1;
         }
    }

    cout <<ans<<endl;

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