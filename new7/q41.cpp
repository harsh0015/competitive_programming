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
 ll n,a,b;cin>>n>>a>>b;
 ll check=1;

 if(a==1){
    if((n-1)%b==0){
        cout <<"Yes"<<endl;
        return;
    }
    else{
        cout <<"No"<<endl;
        return;
    }
 }
  while(check<=n){
   if((n-check)%b==0){
    cout <<"Yes"<<endl;
    return;
   }
   check=check*a;
  }
 
 cout <<"No"<<endl;
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