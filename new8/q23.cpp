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
 
 ll n,m;cin>>n>>m;

ll arr[n];

ll sum=0;

for(ll i=0;i<n;i++){
      cin>>arr[i];
      sum=sum+arr[i];
}
  if(n==1){
    cout <<0<<endl;
    return; 
}
sort(arr,arr+n);

// ll dp[n];

ll j=0;

while(arr[j]==0){
    j++;
}

// cout <<j<<endl;

// int dp[j]=arr[j];
ll extra=arr[j]-1;
ll added=arr[j];

for(ll i=j+1;i<n;i++){
    if(arr[i]>arr[i-1]){
     added=added+arr[i]-arr[i-1];
     extra=extra+arr[i]-arr[i-1]-1;
    }
    else {
        if(extra>0){
            extra--;
        }
        else {
            added++;
        }
    }
}

// cout <<added<<endl;

cout <<sum-added<<endl;
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