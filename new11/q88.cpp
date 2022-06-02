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
ll MOD=1e9+7;


 
void solve(){

    ll n,k;cin>>n>>k;

    vector<ll>v;

    ll x=k;

    while(x){
        v.push_back(x%2);
        x=x/2;
    }
   

    ll ans=0;
    for(ll i=0;i<v.size();i++){
        if(v[i]==1){
            ll y=1;
            for(ll j=0;j<i;j++)y=(y*n)%MOD;

            ans=(ans+y)%MOD;
        }
    }

    cout <<ans<<endl;

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