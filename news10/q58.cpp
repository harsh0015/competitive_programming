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

ll n,m,k;cin>>n>>m>>k;

    ll arr[m];

    for(ll i=0;i<m;i++){
        cin>>arr[i];
        arr[i]--;
    }

    sort(arr,arr+m);

  ll i=0;ll j=0;

  ll minus=0;

ll ans=0;

  while(i<m ){
     ll x=(arr[i]-minus)/k;
     ll temp=0;

     while(i<m && (arr[i]-minus)/k==x){
        i++;
        temp++;
     }
    minus=minus+temp;
     ans++;

  }

  cout <<ans<<endl;

}
 
 
int main(){
    fastio;
 
    int t = 1;
   
   
    while(t--){
        solve();
    }
    return 0;
}