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

    ll n,k,x;cin>>n>>k>>x;

    ll arr[n];



    ll sum=0;

for(ll i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];

}

    sort(arr,arr+n);

  for(ll i=n-1;i>=1;i=i-2){
    if(k<=0)break;

    ll h=arr[i]+arr[i-1];
    if(x<h){
        sum=sum-(arr[i]+arr[i-1]-x);
        k--;
    }
   
  }

  cout <<sum<<endl;

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