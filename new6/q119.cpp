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
 ll n,k,x;
 cin>>n>>k>>x;

 ll arr[n];
for(ll i=0;i<n;i++)cin>>arr[i];

    sort(arr,arr+n);

vector<ll> v;

for(ll i=1;i<n;i++){
    if(arr[i]-arr[i-1]>x){
        ll y=arr[i]-arr[i-1];
        if(y%x==0){
            v.push_back(y/x-1);
        }
        else v.push_back(y/x);
    }
}

sort(v.begin(), v.end());

ll count=0;

for(ll i=0;i<v.size();i++){
    if(v[i]<=k){
        k=k-v[i];
        count++;
    }
    else break;
}

cout <<(v.size()-count+1)<<endl;
 
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