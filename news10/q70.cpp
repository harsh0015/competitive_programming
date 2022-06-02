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

   ll p,q;cin>>p>>q;

   if(p<q){
    cout <<p<<endl;
    return;
   }
   if(p==q){
    for(ll i=2;i*i<=p;i++){
        if(p%i==0){
            cout<<p/i<<endl;
            return;
        }
    }

    cout <<1<<endl;
    return;
   }

   if(p%q!=0){
    cout <<p<<endl;
    return;
   }
   ll h=p;
   while(h%q==0){
    h=h/q;
   }

   ll ma=1;

   for(ll i=2;i*i<=q;i++){
    if(q%i==0  ){
        if((h*i)%q!=0)ma=max(ma,h*i);
        if((h*(q/i))%q!=0)ma=max(ma,h*(q/i));
    }
   }

   cout <<max(ma,h)<<endl;
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