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
 ll arr[n+1];
 for(ll i=1;i<n+1;i++)arr[i]=10000000000;
ll arr1[k],arr2[k];

ll arrm[n+1];

for(ll i=1;i<n+1;i++)arrm[i]=arr[i];

for(ll i=0;i<k;i++)cin>>arr1[i];
for(ll i=0;i<k;i++)cin>>arr2[i];

for(ll i=0;i<k;i++){
    arr[arr1[i]]=arr2[i];
arrm[arr1[i]]=arr2[i];
}

ll i=1;

while(i<=n){
    if(arr[i]<10000000000)break;

    i++;
}
ll m=arr[i];
for(ll j=i+1;j<=n;j++){
    m=m+1;
    m=min(m,arrm[j]);
    arrm[j]=m;
}

ll h=n;
while(h>=1){
    if(arr[h]<10000000000){
        // cout <<"hey";
        break;

    }

    h--;
}


m=arr[h];

for(ll j=h-1;j>0;j--){
    m++;
    m=min(m,arrm[j]);
    arrm[j]=m;
}

for(ll i=1;i<=n;i++)cout <<arrm[i]<<" ";

cout <<endl;
 
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