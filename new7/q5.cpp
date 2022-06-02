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
 ll n,m;

 cin>>n>>m;

 ll sum=0,sum1=0;
 ll y=n/m;
 ll x=y%10;

 for(ll i=1;i<=9;i++){
    sum=sum+(i*m)%10;
 }
 for(ll i=1;i<=x;i++){
     sum1=sum1+(i*m)%10;
 }

  cout <<sum*(y/10) + sum1<<endl;
 
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