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
ll a,b;cin>>a>>b;
ll big=100000;

ll x=abs(a-b);

for(ll i=0;i<big;i++){
    if((i*(i+1))/2==x){
        cout <<i<<endl;
        return;
    }
    if((i*(i+1))/2>x && ((i*(i+1))/2-x)%2==0){
        cout <<i<<endl;
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