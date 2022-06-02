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

 ll q;cin>>q;
 map<pair<ll,ll>,ll>m;

 while(q--){
    ll t;cin>>t;

    if(t==1){
        ll u,v,w;cin>>u>>v>>w;
           
          while(u!=v){
            if(u>v){
                if(m.find({u/2,u})==m.end()){
                    m[{u/2,u}]=w;
                }
                else m[{u/2,u}]+=w;

                 u=u/2;

                continue;
            }

            else{
                if(m.find({v/2,v})==m.end()){
                    m[{v/2,v}]=w;
                }
                else m[{v/2,v}]+=w;

                 v=v/2;

                continue;
            }

          }
    }

    else{
        ll u,v;cin>>u>>v;
         ll ans=0;

               while(u!=v){
            if(u>v){
                if(m.find({u/2,u})==m.end()){
                    ans=ans;
                }
                else ans=ans+m[{u/2,u}];

                 u=u/2;

                continue;
            }

            else{
                if(m.find({v/2,v})==m.end()){
                    ans=ans;
                }
                else ans=ans+m[{v/2,v}];

                 v=v/2;

                continue;
            }

          }

          cout <<ans<<endl;


    }
 }
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