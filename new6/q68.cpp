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
 ll arr[n*k];

 for(ll i=0;i<n*k;i++)cin>>arr[i];

  sort(arr,arr+n*k);
  
  ll h=n-ceel(n,2);
 
 

  ll sum=0;
  ll count=0;

 for(ll i=n*k-1-h;i>=0;i=i-h-1 ){
    if(count==k)break;
    sum=sum+arr[i];
count++;
}
 cout <<sum<<endl;
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