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
    map<ll,ll>m;

    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        m[x]++;
    }

    vector<ll>v;

    for(auto i:m){
        v.pb(i.second);
    }

    sort(v.begin(), v.end());

  int count=0;
  int i=v.size()-1;
  int last=INT_MAX;

  while(i>-1){
   if(v[i]<last){
    count=count+v[i];
    last=v[i];
    
   }
   else{
    if(last-1>0){
         count=count+last-1;
    last=last-1;
    }
   
   }

   i--;
  }

cout <<count<<endl;
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