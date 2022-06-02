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

ll arr[n];

for(ll i=0;i<n;i++)cin>>arr[i];

ll h=0,j=n-1;

while(arr[h]==0)h++;
while(arr[j]==0)j--;




if(h==n){
    cout <<0<<endl;
    return;
}
vector<ll> dis(n,0);
 ll len=n-j;;
for(ll i=0;i<n;i++){
  if(arr[i]==0){
    dis[i]=len;
    len++;
  }
  if(arr[i]!=0){
    dis[i]=0;
    len=1;
  }
}

len=h+1;

for(ll i=n-1;i>=0;i--){
 if(arr[i]==0){
    dis[i]=min(len,dis[i]);
    len++;
  }
  if(arr[i]!=0){
    dis[i]=0;
    len=1;
  }
}

ll ans=0;

for(ll i=0;i<n;i++){
    ans=ans+ arr[i]+ 2*max(ll(0),k-dis[i]);
}
    
cout <<ans<<endl;
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