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

    ll sum=0;

    for(ll i=0;i<n;i++)sum=sum+arr[i];
       

    ll x=0;
     if((sum*2)%n==0){
        x=(sum*2)/n;
     }
        
    else{
        cout <<0<<endl;
        return;
    }

    map<ll,ll>m;
    for(ll i=0;i<n;i++)m[arr[i]]++;

   ll ans=0;

    for(auto i:m){

        if(m.find(x-i.first)!=m.end()){
           
            if(i.first==x-i.first){
                ans=ans+ ((i.second)*(i.second-1));
            }
            else{
                ans=ans+i.second*m[x-i.first];
            }
            
        }
    }
  

  cout <<ans/2<<endl;


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