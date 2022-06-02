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

    if(n==1){
        cout <<v[0]<<endl;
        return;
    }

   ll ans=v[0];
   for(ll i=1;i<n;i++){
    ans=max(ans,v[i]-v[i-1]);
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