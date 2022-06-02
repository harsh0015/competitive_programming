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

    ll pre[n];
    for(ll i=0;i<n;i++){
        if(i==0){
            ll s=v[1];
            for(ll j=2;j<n;j++)s=__gcd(s,v[j]);

            pre[i]=s;
        }
    else{
        ll s=v[0];
        for(ll j=i+1;j<n;j++){
            if(i!=j)
                s=__gcd(s,v[j]);
        }
        pre[i]=s;
    }
        
    }
    ll ans=v[0];
    for(ll i=1;i<n;i++)ans=__gcd(ans,v[i]);

    for(ll i=0;i<n;i++)
        for(ll j=i+1;j<n;j++){
          ll x=__gcd(pre[i]*pre[j],__gcd(v[i],v[j]));
          ans=max(ans,x);
        }

        cout << ans<<endl;
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