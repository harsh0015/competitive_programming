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

    ll n,k;cin>>n>>k;

    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];

    vector<pair<ll,ll>>v;

        while(k--){
            ll d,g;cin>>d>>g;
            v.push_back({d,g});
        }
     sort(v.begin(), v.end());

     ll pre[v.size()];

      pre[0]=v[0].second;

     for(ll i=1;i<v.size();i++){
        pre[i]=pre[i-1]+v[i].second;
             }
  vector<ll>v2;

  for(ll i=0;i<v.size();i++)v2.push_back(v[i].first);

    for(ll i=0;i<n;i++){
     std::vector<ll>::iterator upper;

     upper = upper_bound(v2.begin(), v2.end(),arr[i]);

       if(upper-v2.begin()-1>=0)
        cout <<pre[upper-v2.begin()-1]<<" ";
       else{
        cout <<0<<" ";
       }
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