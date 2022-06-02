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

ll arr[2][n],pre[2][n];




for(ll i=0;i<2;i++){
    for(ll j=0;j<n;j++)
        cin>>arr[i][j];
}

 pre[0][0]=arr[0][0];
pre[1][0]=arr[1][0];

for(ll i=0;i<2;i++){
    for(ll j=1;j<n;j++){
        pre[i][j]=arr[i][j]+pre[i][j-1];
    }
}

ll ans=pre[0][n-1]-pre[0][0];

for(ll i=1;i<n-1;i++){
  ans=min(ans,max(pre[0][n-1]-pre[0][i],pre[1][i-1]));
} 

ans=min(ans,pre[1][n-2]);

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