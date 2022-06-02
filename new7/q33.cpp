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
 ll arr1[n],arr2[n];

 for(ll i=0;i<n;i++)cin>>arr1[i];
 for(ll i=0;i<n;i++)cin>>arr2[i];

    sort(arr1,arr1+n);
sort(arr2,arr2+n);

ll ma=INT_MIN;

for(ll i=0;i<n;i++){
    ll h=arr1[i]+arr2[n-1-i];

    ma=max(h,ma);
}

cout <<ma<<endl;
 
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}