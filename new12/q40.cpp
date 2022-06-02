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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(i%2==0)ans+=v[i];
    }
   vector<ll>vc;

   for(ll i=1;i<n;i=i+2){
    vc.push_back(v[i]-v[i-1]);
   }

   ll masum=0;

   ll cursum=0;
   for(ll i=0;i<vc.size();i++){
    cursum=max(cursum+vc[i],vc[i]);
    masum=max(masum,cursum);
   }

   vector<ll>vb;

   for(ll i=2;i<n;i=i+2){
    vb.push_back(v[i-1]-v[i]);
   }
    
    cursum=0;
   for(ll i=0;i<vb.size();i++){
    cursum=max(cursum+vb[i],vb[i]);
    masum=max(masum,cursum);
   }


  cout <<max(ans,ans+masum)<<endl;

}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}