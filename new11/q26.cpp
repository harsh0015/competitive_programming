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


 
void solve(){
    ll n;cin>>n;

    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];

    sort(v.begin(), v.end());

    ll sum=accumulate(v.begin(), v.end(),0LL);

    ll m;cin>>m;

    while(m--){
        ll x,y;cin>>x>>y;

        ll ans=2e18;

        ll i= lower_bound(v.begin(), v.end(),x)-v.begin();

        if(i>0){
           ans=min(ans,(x-v[i-1])+ max(0LL,y-sum+v[i-1]));
        }
        if(i<n){
            ans=min(ans,max(0LL,y-sum + v[i])); 
        }

        cout <<ans<<endl;
    }

    
  


}
 
 
int main(){
    fastio;
 
    int t = 1;
    
    while(t--){
        solve();
    }
    return 0;
}