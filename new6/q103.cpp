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

ll num[101];
bool flag=true;
for(ll i=0;i<101;i++)num[i]=0;

for(ll i=0;i<n;i++){
    ll ch=arr[i];
ll r=0;
    while(ch>0){
   ll mod=ch%k;
   num[r]=num[r]+mod;
   r++;
  ch=ch/k;
    }

    for(ll k=0;k<101;k++){
        if(num[k]>1){
            cout <<"NO"<<endl;
            return;
        }
    }

}
 cout <<"YES"<<endl;
 return;
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