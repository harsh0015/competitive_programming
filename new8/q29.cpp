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

map<ll,ll>m;
ll len=0;
ll ma=0;
ll counter=0;
for(ll i=0;i<n;i++){
if(len<k){
    m[arr[i]]++;

    if(m[arr[i]]==1)counter++;

    len++;

    ma=max(counter,ma);
}
else{
    m[arr[i]]++;

    if(m[arr[i]]==1)counter++;

    m[arr[i-k]]--;

    if(m[arr[i-k]]==0)counter--;

 ma=max(counter,ma);

}
}

cout <<ma<<endl;
}


int main(){
    fastio;

    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}