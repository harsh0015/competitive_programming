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

ll arr1[n],arr2[n];

for(ll i=0;i<n;i++)cin>>arr1[i];

for(ll i=0;i<n;i++)cin>>arr2[i];

ll a=100000000;
vector<ll>v;

for(ll i=0;i<n;i++){
    if((arr1[0]+arr2[i])%n<a){
        v.clear();
        v.push_back(i);
        a=(arr1[0]+arr2[i])%n;
    }
    else if((arr1[0]+arr2[i])%n==a){
        v.push_back(i);
    }
    else continue;

}

// cout <<v.size()<<endl;
 
 ll arr3[n];

 for(ll i=0;i<n;i++){
    arr3[i]=(arr1[i]+arr2[(i+v[0])%n])%n;
 }

 for(ll i=1;i<v.size();i++){
    int arr4[n];

    for(ll j=0;j<n;j++){
      arr4[j]=(arr1[j]+arr2[(j+v[i])%n])%n;
    }


    // for(int i=0;i<n;i++)cout <<arr4[i]<<" ";

    //     cout <<endl;


  bool flag=false;

  for(ll k=0;k<n;k++){
    if(arr3[k]>arr4[k])break;
    if(arr4[k]<arr3[k]){
        flag=true;
        break;
    }
  }

  if(flag){
    for(ll k=0;k<n;k++)
        arr3[k]=arr4[k];
  }

 }


for(ll i=0;i<n;i++)cout <<arr3[i]<<" ";

 cout <<endl;

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