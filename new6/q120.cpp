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
typedef unsigned long long int ll;
typedef long double ld;

void solve(){
    // cout <<"h"<<endl;
 ll n;cin>>n;
 vector<pair<ll,ll>>v;
 // int r=0;

 for(ll i=0;i<n;i++){
    ll a,b;cin>>a>>b;

    pair<ll,ll>p;
    p.first=b;
    p.second=a;
    // r=r+a;

    v.push_back(p);
 }
 // cout <<"he"<<endl;
sort(v.begin(), v.end());

// for(int i=0;i<n;i++)cout <<v[i].second<<" ";
// cout <<endl;

// for(int i=0;i<n;i++)cout <<v[i].first<<" ";
// cout <<endl;

ll i=0,j=n-1;
ll count=0;
ll ans=0;
 while(i<=j){
    // cout<<i<<" "<<j<<" "<<count<<" "<<ans<<endl;

    if(i!=j){
         if(count>=v[i].first){
    count=count+v[i].second;
    ans=ans+v[i].second;
    i++;
   }
   else{
    if(v[j].second+count<=v[i].first){
        // cout <<"ye"<<endl;
        count=count+v[j].second;
        ans=ans+2*v[j].second;
        j--;
    }
    else{
       ll z=v[i].first-count;
       count=count+z;

        ans=ans+2*z;
        v[j].second=v[j].second-z;
    }
   }

    }
    else{
        if(count<v[i].first){
            if(v[i].first -count>=v[i].second){
             count=count+v[i].second;
            ans=ans+2*v[i].second;
            i++;
            continue;
            }
            ll z=v[i].first-count;
            count=count+z;
            ans=ans+2*z;
            v[i].second=v[i].second-z;

        }
        else{
            count=count+v[i].second;
            ans=ans+v[i].second;
            // count=count+v[i].second;
            i++;
        }
    }
  }

cout <<ans<<endl;
 
}


int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}