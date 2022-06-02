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

    ll n,k;cin>>n>>k;

    vector<ll>v(k);
    for(ll i=0;i<k;i++)cin>>v[i];

        sort(v.begin(), v.end());

    ll count=0;
    ll pos=0;

    for(ll i=v.size()-1;i>=0;i--){
       if(v[i]>pos){
        count++;
        pos=pos+n-v[i];
       }
       else break;
    }

    cout <<count<<endl;

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