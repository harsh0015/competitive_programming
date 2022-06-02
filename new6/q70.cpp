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
 ll n,q;cin>>n>>q;

 ll arr[n];
 for(ll i=0;i<n;i++)cin>>arr[i];
    if(n==1)
    {
        cout<<arr[0]<<endl;
        return;
    }


ll ans=0;

for(ll i=0;i<n;i++){
    if(i==0){
        if(arr[i]>arr[i+1]){
          
            ans=ans+arr[i];
        }
        continue;
    }
    if(i==n-1){
        if(arr[i]>arr[i-1]){
          
            ans=ans+arr[i];
        }
        continue;
    }

    if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
       
        ans=ans+arr[i];
    }
    if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
       
        ans=ans-arr[i];
    }
}



cout <<ans<<endl;


 
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