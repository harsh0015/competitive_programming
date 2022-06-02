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

ll ans=0;
for(ll i=1;i<n;i=i+2){
  if(arr[i]<=p){
    ans=ans+2;
    p=p-arr[i];
  }
  else{
    if(arr[i-1]<=p){
        ans++;
        p=p-arr[i-1];
    }

    break;
  }

}

ll ans2=0;

if(arr[0]<=q){
    ans2++;

q=q-arr[0];
}
else {
    cout <<0<<endl;
    return;
}

for(ll i=2;i<n;i=i+2){
  if(arr[i]<=q){
    ans2=ans2+2;
    q=q-arr[i];
  }
  else{
    if(arr[i-1]<=q){
        ans2++;
        q=q-arr[i-1];
    }

    break;
  }

}

cout <<max(ans,ans2)<<endl;
 
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