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
typedef unsigned long long int ll;
typedef long double ld;

void solve(){

 ll n;cin>>n;
 ll MOD=1000000007;
 vector<ll >v(n);

 for(ll i=0;i<n;i++)cin>>v[i];

    ll mi=*min_element(v.begin(), v.end());

ll count=0;

for(auto i:v){
    if((i&mi)!=mi){
        cout <<0<<endl;
        return;
    }

    if(mi==i)count++;
}

// if(count<2){
//     cout <<0<<endl;
//     return;
// }

ll ans=1;

// for(ll i=count;i>2;i--){
//     ans=(ans*i)%MOD;
// }

for(ll i=n-2;i>=1;i--)ans=(ans*i)%MOD;


cout <<(count*((ans)*(count-1))%MOD)%MOD<<endl;

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