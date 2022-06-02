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
   ll count1=0,count0=0;

   for(int i=0;i<n;i++){
    ll x;cin>>x;
    if(x==1)count1++;
    if(x==0)count0++;
   }

   if(count1==0){
    cout <<0<<endl;
    return;
   }

   else{
    if(count0==0)cout <<count1<<endl;
    else  cout <<ll((count1)*(ll(pow(2,count0))))<<endl;
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