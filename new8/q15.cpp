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
 ll big=1000000000000000;

 for(ll i=0;i<n;i++)cin>>arr[i];

sort(arr,arr+n);
ll ans=big;

int c=1;

while(1){

   ll pw=1;
   ll val=0;
    for(int i=0;i<n;i++,pw*=c){
        if(pw>=ll(big)){
            val=-1;
            break;
        }
         val=val+abs(arr[i]-pw);
    }

    if(val==-1)break;

    ans=min(ans,val);
    c++;
}
 
cout <<ans<<endl;
}


int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}