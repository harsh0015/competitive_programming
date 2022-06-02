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
    vector<ll> ans;
    ans.push_back(1);
    ll sum=1;
    for(ll i=1;i<n;i++){
        ans.push_back(i);
        sum=sum+i;
    }
    ll x=1;
    for(ll i=1;i<=n;i++)x=x*2;

    ans.push_back(x-sum);

    for(ll i=0;i<n+1;i++)cout<<ans[i]<<" ";

        cout <<endl;

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