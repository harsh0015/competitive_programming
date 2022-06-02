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
 ll n,p,k;cin>>n>>p>>k;

 ll arr[n];
ll q=p;
 for(ll i=0;i<n;i++)cin>>arr[i];

sort(arr,arr+n);


ll sum[n+1];

sum[0]=0;
sum[1]=arr[0];

ll ans=0;


if(sum[1]<=p)ans=1;

for(ll i=2;i<=k;i++){
    sum[i]=sum[i-1]+arr[i-1];

    if(sum[i]<=p)ans=i;
}

for(ll i=k;i<=n;i++){
    sum[i]=sum[i-k]+arr[i-1];

    if(sum[i]<=p)ans=i;
}
cout <<ans<<endl;
 
}


int main(){
    fastio;

    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}