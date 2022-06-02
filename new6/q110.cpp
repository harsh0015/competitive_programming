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

    sort(arr,arr+n);

ll l=0;
ll r=1;
ll d=arr[1]-arr[0];

for(ll i=1;i<n-1;i++){
    if(arr[i+1]-arr[i]<d){
        l=i;
        r=i+1;
        d=arr[i+1]-arr[i];
    }
}

// cout <<l<<" "<<r<<" "<<d<<endl;

cout <<arr[l]<<" " ;
for(ll i=r+1;i<n;i++)cout <<arr[i]<<" ";

for(ll i=0;i<l;i++)cout <<arr[i]<<" ";

    cout <<arr[r]<<endl;

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