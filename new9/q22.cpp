#include <bits/stdc++.h>
#include<stdio.h>
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

 ll arr[n];

 for(ll i=0;i<n;i++)cin>>arr[i];

  ll ans=-10000000000;

  ll i=n-1;
  

  while(i>0){
    ll m=-10000000000;
    ll j=i-1;

    while(j>=0){
        if(m >= ((i+1)*(j+1)-k*(arr[i]|arr[j])))break;

        else{
            m=max(((i+1)*(j+1)-k*(arr[i]|arr[j])) ,m);
            j--;
        }
    }
    ans=max(ans,m);
    i=j+1;
  }

  cout <<ans<<endl;
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