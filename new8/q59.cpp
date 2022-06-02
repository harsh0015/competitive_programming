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

ll arr[3][n],dp[3][n];

for(ll i=0;i<n;i++)cin>>arr[1][i];
for(ll i=0;i<n;i++)cin>>arr[2][i];

    if(n==1){
        cout <<max(arr[1][0],arr[2][0])<<endl;
        return;
    }

    if(n==2){
        cout <<max(arr[1][0]+arr[2][1],arr[2][0]+arr[1][1])<<endl;
        return;
    }

    dp[1][0]=arr[1][0];
    dp[2][0]=arr[2][0];
    dp[1][1]=dp[2][0]+arr[1][1];
    dp[2][1]=dp[1][0]+arr[2][1]; 

    for(ll i=2;i<n;i++){
        dp[1][i]=arr[1][i]+max(dp[2][i-1],dp[2][i-2]);
        dp[2][i]=arr[2][i]+max(dp[1][i-1],dp[1][i-2]);
    }

    ll m=0;

    for(ll i=0;i<n;i++){
        m=max(m,dp[1][i]);
        m=max(m,dp[2][i]);
    }

    cout <<m<<endl;
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