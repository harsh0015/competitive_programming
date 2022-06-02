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

bool fn(pair<ll,ll> &x, pair<ll,ll> &y)
{
    if (x.first!= y.first) {
        return x.first < y.first;
    }
 
    return x.second > y.second;
}
 
void solve(){

    ll q,n;cin>>q>>n;

    ll arr[n+1];

    for(ll i=1;i<n+1;i++)cin>>arr[i];

        vector<pair<ll,ll>>v;

    for(ll i=1;i<n+1;i++){
        v.push_back({arr[i],i});
    }

    sort(v.begin(), v.end(),fn);

    

    vector<ll>v2;

    for(ll i=0;i<n;i++){
        v2.push_back(v[i].second);
    }

// for(int i=0;i<n;i++){
//         cout <<v2[i]<<" ";
//     }

    ll pos[n+1];

    for(ll i=1;i<n+1;i++){
     pos[i]=0;
    }
    ll ans=0;

    for(ll i=1;i<n+1;i++){
        ll j;
        for( j=1;j<=n;j++){
            if(v2[j-1]==i)break;
        }
        for(ll k=1;k<=j;k++){
            if(pos[k]==1)ans++;

            if(k==j)pos[k]=1;
        }


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