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

 vector<ll> arr(n);
 for(ll i=0;i<n;i++)cin>>arr[i];

sort(arr.begin(), arr.end());
   
   ll ans=0;
   ll i;
   for( i=n-1;i>=0;i--){
    if(arr[i]>=x)ans++;
    else break;
   }

   ll c=1;

   while(i>=0){
    if(c*arr[i]>=x){
        ans++;
        i--;
        c=1;
    }
    else {
        c++;
        i--;
    }
   }
 cout <<ans<<endl;
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}