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

vector<ll> factors(ll n){
   vector<ll> v;

    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
           v.push_back(i);

           if(n/i!=i)v.push_back(n/i);
        }
    }

    return v;
}

void solve(){
 
 ll n;cin>>n;
 string s;cin>>s;

 ll count=0;

 for(ll i=0;i<n;i++){
    if(s[i]=='1')count++;
 }

 if(count==1 || count==n){
    cout <<0<<endl;
    return;
 }
 if(count==0){
    cout <<1<<endl;
    return;
  }

// cout <<"h"<<endl;
vector<ll> v=factors(n);
// v.push_back(1);
// cout <<v.size()<<endl;
ll ans=INT_MAX;
 for(ll i=0;i<v.size();i++){
     ll count1=0;
     ll count0=0;
    
    ll y=v[i];

    for(ll j=0;j<y;j++){
        for(ll k=j;k<n;k=k+y){
            if(s[k]=='1')count1++;
            else count0++;
        }

        ans=min(ans,count-count1 + count0);

        count0=0;count1=0;
    }
 }

 cout <<ans<<endl;

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