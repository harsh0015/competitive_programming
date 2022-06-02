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

 ll ans;
 if(n%2==0){
    ans=(2*(n/2)) + (3*(n/2));
 }
 else ans=(2*(n/2 +1 )) + (3*(n/2));

 ll check=2;

 for(ll i=3;i<100000;i++){
    ll y=__gcd(i,check);
    check=check*(i/y);

    ans=ans+ (n/check);

    if(check>n)break;
 }

cout <<ans%1000000007<<endl;

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