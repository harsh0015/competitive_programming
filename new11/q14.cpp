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
    ll mod=1e9+7;

    if(n==1 || n==2){
        cout <<0<<endl;
        return;
    }

    ll sum=1;
    ll sum1=1;
    for(int i=1;i<n;i++){
        sum1=(sum1*2)%mod;
    }
    for(int i=2;i<=n;i++){
        sum=(sum*i)%mod;
    }

    cout <<(mod + (sum-sum1))%mod<<endl;

}
 
 
int main(){
    fastio;
 
    int t = 1;
   
   
    while(t--){
        solve();
    }
    return 0;
}