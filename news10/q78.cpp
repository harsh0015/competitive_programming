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

set<ll>s;
ll m=-1;

for(ll i=1;i<n;i++){
    if(arr[i]!=-1 && arr[i-1]!=-1){
        m=max(m,abs(arr[i]-arr[i-1]));
    }
}

for(ll i=1;i<n;i++){
   if(arr[i]==-1 || arr[i-1]==-1){
    ll x=max(arr[i],arr[i-1]);
    if(x>-1){
        s.insert(x);
    }
   }
}

   if(s.size()==0){
    cout <<0<<" "<<1<<endl;
    return;
   }
    
    ll mi=10000000000;
    ll ma=0;
    for(auto i:s){
       mi=min(mi,i);
       ma=max(ma,i);
       
    }
    ll h=(ma+mi)/2;

    for(auto i:s){
        m=max(m,abs(i-h));
    }

   cout <<m<<" "<<h<<endl;
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