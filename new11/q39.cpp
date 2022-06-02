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
    ll arr[n+1];
      vector<vector<ll>>v;
    for(ll i=1;i<n+1;i++)cin>>arr[i];
      ll arr2[n+1];
  for(ll i=1;i<n+1;i++){
    arr2[i]=arr[i];
  }
  arr2[0]=INT_MIN;
  sort(arr2,arr2+n+1);

    for(ll i=1;i<n+1;i++){
        if(arr[i]==arr2[i])continue;
        else{
            ll j;
            for( j=i+1;j<n+1;j++){
                if(arr[j]==arr2[i])break;
            }
            // cout <<i<<" "<<j<<" "<<abs(i-j)<<endl;
            v.push_back({i,j,abs(i-j)});
        
        ll dp[n+1];
        for(ll k=1;k<i;k++)dp[k]=arr[k];
        dp[i]=i;
       for(ll k=i+1;k<=j;k++){
        dp[k]=arr[k-1];
       }
       for(ll k=j+1;k<n+1;k++)dp[k]=arr[k];

        for(ll k=1;k<n+1;k++)arr[k]=dp[k];

    }
       
    }
    cout <<v.size()<<endl;
    for(ll i=0;i<v.size();i++){
        cout <<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<endl;
    }

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