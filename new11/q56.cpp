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
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];

    ll arr2[n];
    
    vector<pair<ll,ll>>v;

    for(ll i=0;i<n;i++)v.push_back({arr[i],i});
        sort(v.begin(), v.end());

    ll i=0;
    ll req=0;

    while(i<n){
       if(v[i].first>req){
        arr2[i]=req;
        req++;
       }
       else{
        arr2[i]=0;
       }
       i++;
    }

    ll ans[n];

    for(ll i=0;i<n;i++){
        ans[v[i].second]=arr2[i];
    }

    for(ll i=0;i<n;i++)cout <<ans[i]<<" ";

        cout <<endl;
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