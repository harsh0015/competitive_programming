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

 ll big=1000000;

 ll arr[n-1];

 for(ll i=0;i<n-1;i++)cin>>arr[i];

// ll dp[n-1];

//   dp[0]=arr[0];

//   for(ll i=1;i<n-1;i++){
//     dp[i]=dp[i-1]+arr[i];
//   }

  ll sum=0;

  for(ll i=0;i<n-1;i++)sum=sum+(n-1-i)*arr[i];

ll x=(n*(n+1))/2;

ll y=x-sum;

if(y%n!=0){
    cout <<-1<<endl;
    return;
}

ll a=y/n;

ll ans[n];

ans[0]=a;

for(ll i=1;i<n;i++){
    ans[i]=ans[i-1]+arr[i-1];
}

// ll check[big];
map<ll,ll>m;
for(ll i=1;i<n+1;i++)m[i]=0;

for(ll i=0;i<n;i++)m[ans[i]]++;

bool flag=true;
for(ll i=1;i<n+1;i++){

    // if(m.find(i)==m.end()){
    //     cout <<-1;
    //     return;
    // }

    if(m[i]!=1){
        flag=false;
        break;
    }
}

if(flag){
    for(ll i=0;i<n;i++)cout <<ans[i]<<" ";
}
else cout <<-1;
}


int main(){
    fastio;

    int t = 1;

    while(t--){
        solve();
    }
    return 0;
}