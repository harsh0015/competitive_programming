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

if(arr[0]==0){
    ll count=0;
    for(ll i=0;i<n;i++){
      if(arr[i]!=0)count++;
    }

    cout <<count<<endl;
    return;
}

ll m=arr[0];


bool flag=false;
ll c=0;
for(ll i=0;i<n;i++){
    // cout <<arr[i]<<endl;
    if(arr[i]!=m){
        c++;
        if(arr[i] <= 2*m){
            // cout <<arr[i]<<"*"<<endl;
            flag=true;
        }
    }
}
// cout <<c<<endl;
if(flag){
    cout <<n<<endl;
    return;
}
cout <<c<<endl;
 
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