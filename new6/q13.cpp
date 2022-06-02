#include <bits/stdc++.h>
using namespace std;
 
#define MAX LLONG_MAX
#define MIN LLONG_MIN
#define M 1000000007
#define MM 998244353
#define rep(i, j, k) for (ll i = j; i < k; i++)
#define repr(i, j, k) for (ll i = j; i >= k; i--)
#define repi(i, j, k, l) for (ll i = j; i < k; i += l)
#define pb push_back
#define ppb pop_back
#define mem0(a) memset(a, 0, sizeof(a))
#define mem1(a) memset(a, -1, sizeof(a))
#define mp make_pair
#define pll pair<ll,ll>
#define out(a) for(auto x: a) cout<<x<<" "; cout<<endl;
#define all(a) a.begin(),a.end()
#define vpll vector<pll>
typedef long long ll;
typedef vector<long long> vll;
typedef vector<char> vc;
 
unordered_set<ll> good;
 
void find(){
    good.insert(0);
    good.insert(1);
    rep(i,1,10){
        vll gd;
        for(auto x: good){
            gd.pb(x+(ll)pow(3,i));
        }
        for(auto x:gd){
            good.insert(x);
        }
    }
}
 
void solve() {
    ll n;
    cin>>n;
    rep(i,n,1e9){
        if(good.find(i)!=good.end()){
            cout<<i<<endl;
            break;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    find();
    ll t = 1;
    cin >> t;
    while (t--) solve();
 
    return 0;
}
