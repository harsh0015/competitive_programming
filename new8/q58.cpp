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

ll count=0;
ll sum=0;
map<ll,ll>m;

for(ll i=0;i<n;i++){
    // cout <<i<<" "<<m.size()<<endl;
    sum=sum+arr[i];
  

    if(sum==0){
        count++;
        sum=arr[i];
     
        m.clear();
        
        m[sum]++;

   m[sum]++;
   continue;
    }

    if(m.find(sum)!=m.end() ){
        count++;
        sum=arr[i];
       
        m.clear();
       
        // m[sum]++;

    }
      m[sum]++;

}

cout <<count<<endl;
}


int main(){
    fastio;

    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}