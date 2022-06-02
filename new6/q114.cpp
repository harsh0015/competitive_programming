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
 ll n,q;cin>>n>>q;

 vector<ll>v(n);
unordered_map<ll,ll>m;
 for(ll i=0;i<n;i++){
    cin>>v[i];
    m[v[i]]++;
}

sort(v.begin(), v.end());
vector<ll>::iterator lower;
    while(q--){
        ll x;cin>>x;

        if(m.find(x)!=m.end()){
            cout <<0<<endl;
            continue;
        }
           lower = lower_bound(v.begin(), v.end(), x);
           ll ans=lower-v.begin();

           ll r=n-ans;


           // cout <<ans<<endl;

           if(r%2==0){
            cout <<"POSITIVE"<<endl;
           }
           else cout <<"NEGATIVE"<<endl;
           
    }
 
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