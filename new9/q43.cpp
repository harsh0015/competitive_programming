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
ll l,r,m;
cin>>l>>r>>m;

ll x=r-l;

for(ll i=l;i<=r;i++){
    if(m%i<=x && m-m%i>0){
        cout <<i<<" ";

        ll y=m%i;
        cout <<l+y<<" "<<l<<endl;
        return;
    }

    if(i-m%i<=x  ){
         cout <<i<<" ";

        ll y=m%i;
        cout <<l<<" "<<l+i-m%i<<endl;
        return;
    }
}
 
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