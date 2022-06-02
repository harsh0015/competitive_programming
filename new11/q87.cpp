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

    ll n,m;cin>>n>>m;

   ll hu=0,hd=0,wl=0,wr=0;

   ll h=0,w=0;

   pair<ll,ll>p={1,1};

   string s;cin>>s;
   ll t=s.length();
   for(ll i=0;i<t;i++){
     
     if(s[i]=='U'){
        h++;
     }
     else if(s[i]=='D')h--;
     else if(s[i]=='L')w--;
     else w++;

     hu=max(hu,h);
     hd=min(hd,h);
     wl=min(w,wl);

     wr=max(wr,w);

     

      if(hu+abs(hd)<n && wr+abs(wl)<m){
        ll x=1+abs(wl);
        ll y=1+abs(hu);
        p.first=y;
        p.second=x;
      }
      else break;
   }

   cout <<p.first<<" "<<p.second<<endl;

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