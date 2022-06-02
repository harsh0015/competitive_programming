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

ll mod=1000000007;

 
void solve(){

    ll n;cin>>n;

    ll par[n+1];
      ll check[n+1];

     // for(ll i=1;i<n+1;i++)check[i]=false;

       
        

    for(ll i=2;i<n+1;i++){
        cin>>par[i];
        // cout <<"*"<<par[i];
      check[par[i]]=1;
    }

     ll arr[n];

    for(ll i=1;i<n+1;i++)cin>>arr[i];

        if(n==1){
            cout<<0<<endl;
            return;
        }

        vector<int>v;


for(int i=1;i<n+1;i++){
    if(!check[i])v.push_back(i);
}

vector<int>v2;

for(int i=0;i<v.size();i++){
    int len=2;


    int u=par[v[i]];
    while(u!=1){
        len++;
        u=par[u];
    }
    v2.push_back(len);
}

 ll final=0;

 cout <<

   for(int j=0;j<v2.size();j++){
    ll ans=1;

    for(int i=1;i<=v2[j];i++){
        ans=(ans*2)%mod;
    }

    ans=ans-n-1;

    final=(final+ans)%mod;
   }

    

    cout <<final<<endl;


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