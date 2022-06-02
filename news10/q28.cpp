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

    vector<vector<ll>>v;

    for(ll i=0;i<n;i++){
        ll k;cin>>k;
        vector<ll>v1;
        while(k--){
            ll x;cin>>x;
            v1.push_back(x);
        }

        v.push_back(v1);
    }
    

    vector<pair<ll,ll>>vals;

    for(ll i=0;i<n;i++){
        ll r=v[i].size();
        ll h=0;

        for(ll j=0;j<r;j++){
              h=max(h,v[i][j]-j+1);
        } 

        vals.push_back({h,h+r}); 
    }

    sort(vals.begin(), vals.end());

    // for(int i=0;i<vals.size();i++){
    //     cout <<vals[i].first<<" "<<vals[i].second<<endl;
    // }

    ll m=0;

    for(ll i=0;i<vals.size()-1;i++){
        if(vals[i].second>vals[i+1].first){
            ll d=vals[i].second-vals[i+1].first;
            vals[i+1].first+=d;
            vals[i+1].second+=d;
            continue;
        }
        if(vals[i].second<vals[i+1].first)m=m+vals[i+1].first-vals[i].second;
    }

    cout <<m+vals[0].first<<endl;

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