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
 
 int n;cin>>n;

 int arr[n];

 for(ll i=0;i<n;i++)cin>>arr[i];

 map<ll,ll>m;

for(ll i=0;i<n;i++)m[arr[i]]++;

ll count=0;

for(auto i:m){
    ll x=i.first;

    ll y=0;

    if(x%2==1)y=2*(x/2);
    else y=x-1;

    if(i.second<=y)count=count+i.second;
    else count=count+y;
}

cout <<count<<endl;
 
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