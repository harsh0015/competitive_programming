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

 vector<ll > odd,even;

 ll arr[n];

for(ll i=0;i<n;i++)cin>>arr[i];

    sort(arr,arr+n);

 for(ll i=0;i<n;i++){
  ll x=arr[i];
 if(x%2==0)even.push_back(x);
 else odd.push_back(x);
 }

 ll i=0,j=0;

 if(odd.size()>0)
 while(i<even.size() && j<odd.size()-1){
    cout <<even[i]<<" "<<odd[i]<<" ";

    i++;j++;
 }



 while(i<even.size()){
    cout <<even[i]<<" ";
    i++;
 }
while(j<odd.size()){
    cout <<odd[j]<<" ";
    j++;
 }

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