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

 ll ans=0;
ll x;
 if(n%2==0){
     x=n;

    while(x>0){
      if((x/2)%2!=0 ||(x/2)==2 ){
        ans=ans+x/2;
        x=x/2 -1;
      }
      else{
        ans=ans+1;
        x=x-2;
      }
    }

    cout <<ans<<endl;
 }
 else{
    x=n-1;
    

    while(x>0){
      if((x/2)%2!=0 ||(x/2)==2){
        ans=ans+x/2;
        x=x/2 -1;
      }
      else{
        ans=ans+1;
        x=x-2;
      }
    }
cout << n-ans<<endl;

 }


}


int main(){
    fastio;

    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}