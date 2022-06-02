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

ll dp[n][31];

for(ll i=0;i<n;i++){
    for(ll j=0;j<31;j++){
        dp[i][j]=0;
    }
}

for(ll i=0;i<n;i++){
int x=arr[i];

vector<ll>v;

while(x>0){
    v.push_back(x%2);
    x=x/2;
}

for(ll u=0;u<v.size();u++)dp[i][u]=v[u];


}

vector<ll>ans;

ll res=0;
ll e=1;

for(ll i=0;i<31;i++){
    ll count=0;

    for(ll j=0;j<n;j++){
        if(dp[j][i]==1)count++;
        
    }
    if(count==n)ans.push_back(1);
        else ans.push_back(0);

    if(count!=n && count!=0){
        res=res+e;
    }
    
    e=e*2;
}

ll final=0;
ll x=1;
for(ll i=0;i<31;i++){
   final=final+x*ans[i];
   x=x*2;
}

cout <<final<<" "<<res<<endl;

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