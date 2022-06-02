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

   ll c=1;
   if(k==1){
    cout <<1<<endl;
    return;
   }
   for(int i=1;i<100000;i++){
       c=c*2;
       if(c==k){
        ll h=1;
        for(int j=1;j<=i;j++){
            h=h*n;
        }
        cout <<h<<endl;
        return;
       }
       if(c>k){
        ll h=1;
        for(int j=1;j<=i-1;j++){
            h=h*n;
        }
        int r=k-c/2;
       ll t=1;
        for(int j=1;j<=r;j++){
            t=t*n;
        }
       }
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