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

    ll n,x;cin>>n>>x;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];

    ll arr2[n];
for(ll i=0;i<n;i++)arr2[i]=arr[i];

    sort(arr2,arr2+n);

    ll count=0;
for(ll i=0;i<n;i++){
    if(arr[i]!=arr2[i])count++;
}

if(count==0){
    cout <<"YES"<<endl;
    return;
}

for(int i=0;i<n;i++){
    if(arr[i]!=arr2[i]){
        if(i<x && n-1-i<x){
            cout <<"NO"<<endl;
            return;
        }
    }
}
cout <<"YES"<<endl;


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