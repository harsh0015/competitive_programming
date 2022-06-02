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
 ll arr[n];
 for(ll i=0;i<n;i++)cin>>arr[i];

    ll c=0;
ll fm=0;

for(ll i=0;i<n;i++){
ll f=arr[i];
ll l=arr[i];
//
  for(ll j=i+1;j<n;j++){
   if(arr[j]<=l){
      f=f+arr[j];
   l=arr[j];
   }
  else{
    f=f+l;
  }
  }

  //
 l=arr[i];
  for(ll j=i-1;j>=0;j--){
   if(arr[j]<=l){
      f=f+arr[j];
   l=arr[j];
   }
  else{
    f=f+l;
  }
  }

  if(f>fm){
    c=i;
    fm=f;
  }

  // cout <<"#"<<i<<" "<<f<<endl;

  }
// cout <<fm<<endl;
//   cout <<c<<endl;

  vector<ll>ans;
  ll l=arr[c];
  for(ll i=c;i>=0;i--){
  if(arr[i]<=l){
      ans.push_back(arr[i]);
   l=arr[i];
   }
  else{
    ans.push_back(l);
  }
  }

  l=arr[c];
  for(ll i=c+1;i<n;i++){
if(arr[i]<=l){
      ans.push_back(arr[i]);
   l=arr[i];
   }
  else{
    ans.push_back(l);
  }
  }

  for(ll i=c;i>=0;i--)cout <<ans[i]<<" ";

for(ll i=c+1;i<n;i++)cout <<ans[i]<<" ";
 
}


int main(){
    fastio;

    int t = 1;

    while(t--){
        solve();
    }
    return 0;
}